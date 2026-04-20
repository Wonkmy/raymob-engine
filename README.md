一个自制的基于raylib的安卓项目引擎，可以直接打开开发安卓项目

## How to Use?

1. Clone the repository and automatically initialize and update all submodules:
   ```
   git clone --recurse-submodules https://github.com/Bigfoot71/raymob.git
   ```
2. Open the `gradle.properties` file and fill in the necessary values for your application, such as the app name, package name, version, etc.
3. That's it! You can start coding your raylib app in the `app/src/main/cpp` directory!

> [!NOTE]
> Do not modify the instances of `com.raylib.raymob` and `raymob` as they will be automatically replaced during compilation with the information provided in `gradle.properties`.

## Compatibility

By default, the raymob template targets APIs 24 to 34, which corresponds from Android 7.0 to Android 13 (_so 96% of devices according to [apilevels.com](https://apilevels.com/)_).

This project is fully C/C++ compatible for the logical part with raylib and you can also customize the Java part to your wishes.

## Additional Features

In this project, you have access to the header file [raymob.h](app/src/main/cpp/deps/raymob/raymob.h), which provides functions for controlling sensors, vibration, and the Android soft keyboard, as well as lower-level functions such as obtaining the `android_app`, manipulating the cache, managing resources, and calling Java functions from your native code.

## Useful Links

- [AdMob Integration in raymob](https://gist.github.com/Bigfoot71/b3a658458ece93ddcb06f4c78f85076a): Gist demonstrating the integration of AdMob in raymob.

## Contributions

If you believe that your repositories or gists related to raymob can be beneficial to others, please feel free to reach out to me or open a pull request to have them added here.
I welcome contributions and collaborations to enhance the raymob project and make it more valuable for the community.

You can also contribute to the project by reporting issues, suggesting improvements, or helping to document the project. Your input is highly appreciated!

### Support

If you have any questions or encounter problems when using this implementation, please do not hesitate to ask for help by submitting an issue on this repository, this may help other users.
