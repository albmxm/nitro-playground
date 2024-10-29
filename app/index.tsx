import { Button, View } from "react-native";
import { Math } from "nitro-library";

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
          // console.log(MathCpp.add(1, 2));
          console.log(Math.add(1, 2));
        }}
      ></Button>
    </View>
  );
}
