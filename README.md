# MongooseLibTemplate
A simple template for an MJS-enabled Mongoose OS library.

## Usage
You can modify and include your library directly in the `/deps/` directory of your project folder or you can retrieve your library from GitHub by adding `- origin: [Your Repository Address]` under the `libs:` tag in mos.yml.
Then, build with the MongooseOS command line tool, `mos` for your desired platform.

## Modification
* All functions need to be wrapped in `mjs_fs/api_[your lib name].js` in a dictionary of functions and their respective ffi calls.
* Remember to include a return type when you wrap your funtion with `ffi`.
* Your `src` flder should contain a `mgos_[your lib name]_init` function somewhere within it, or else builds will fail. This can be used for any setup operations the library may require.
