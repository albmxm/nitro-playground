import { Button, View } from "react-native";
import { MathConstructor } from "nitro-library";

export default function Index() {
  return (
    <View
      style={{
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
      }}
    >
      <Button
        title="Run Nitro library"
        onPress={() => {
          console.log(MathConstructor.add(1, 2));
        }}
      ></Button>
    </View>
  );
}
