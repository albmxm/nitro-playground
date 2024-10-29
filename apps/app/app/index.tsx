import {
  Button,
  Platform,
  PlatformOSType,
  Text,
  TextInput,
  View,
} from "react-native";
import { Math, MathCpp } from "@nitro-playground/nitro-math";
import { useMemo, useState } from "react";

const LANGUAGE_MAP: Partial<Record<PlatformOSType, string>> = {
  ios: "swift",
  android: "kotlin",
  web: "js",
};

const displayInput = (value: number | undefined): string => {
  return value === undefined ? "" : String(value);
};

const parseInput = (value: string): number | undefined => {
  // Remove non-numeric characters
  const cleanValue = value.replace(/[^0-9]/g, "");

  if (cleanValue === "") {
    return undefined;
  }

  const num = Number(cleanValue);

  if (isNaN(num)) {
    return undefined;
  }

  return num;
};

export default function Index() {
  const [a, setA] = useState<number | undefined>(3);
  const [b, setB] = useState<number | undefined>(2);
  const [runImpl, setRunImpl] = useState<"native" | "cpp">("native");

  const language = LANGUAGE_MAP[Platform.OS];

  const result = useMemo(() => {
    const cleanA = a === undefined ? 0 : a;
    const cleanB = b === undefined ? 0 : b;

    let impl: typeof Math;

    switch (runImpl) {
      case "native": {
        impl = Math;
        break;
      }
      case "cpp": {
        impl = MathCpp;
        break;
      }
      default:
        throw new Error("Invalid runImpl");
    }

    console.log(
      `Running ${impl === Math ? "Math" : "MathCpp"}.add(${cleanA}, ${cleanB})`
    );
    const result = impl.add(cleanA, cleanB);

    console.log(`Result: ${result}`);
    console.log();

    return result;
  }, [a, b, runImpl]);

  return (
    <View
      style={{
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
        gap: 8,
      }}
    >
      <View style={{ flexDirection: "row", alignItems: "center" }}>
        <Text>A: </Text>
        <TextInput
          placeholder="3"
          placeholderTextColor="#aaa"
          value={displayInput(a)}
          keyboardType="numeric"
          onChangeText={(value) => {
            const parsed = parseInput(value);

            setA(parsed);
          }}
          style={{ borderRadius: 4, borderWidth: 1, padding: 4, width: 200 }}
        />
      </View>

      <View style={{ flexDirection: "row", alignItems: "center" }}>
        <Text>B: </Text>
        <TextInput
          placeholder="2"
          placeholderTextColor="#aaa"
          value={b ? String(b) : ""}
          keyboardType="numeric"
          onChangeText={(value) => {
            const parsed = parseInput(value);

            setB(parsed);
          }}
          style={{ borderRadius: 4, borderWidth: 1, padding: 4, width: 200 }}
        />
      </View>

      <View style={{ flexDirection: "row", alignItems: "center" }}>
        <Text>A + B = {result}</Text>
      </View>

      <View style={{ marginTop: 16, gap: 4 }}>
        <Button
          disabled={runImpl === "native"}
          title={`Set add() in ${language}`}
          onPress={() => setRunImpl("native")}
        />

        <Button
          disabled={runImpl === "cpp"}
          title="Set add() in cpp"
          onPress={() => setRunImpl("cpp")}
        />
      </View>
    </View>
  );
}
