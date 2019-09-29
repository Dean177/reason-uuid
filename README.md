# reason-uuid

> Bucklescript bindings for [node-uuid](https://github.com/kelektiv/node-uuid).

[![NPM Version](https://img.shields.io/npm/v/reason-uuid.svg)](https://npmjs.org/package/reason-uuid)

## Installation

```sh
yarn add reason-uuid
```

Then add `"reason-uuid"` to the the `bs-dependencies` section of your `bsconfig.json`.

## Usage

### Version 1 (timestamp)

```reason
let uuid = Uuid.V1.make();
```

### Version 3 (namespace)

```reason
/* Using predefined DNS namespace */
let uuid = Uuid.V3.make("hello.example.com", Uuid.Dns);

/* Using predefined URL namespace */
let uuid = Uuid.V3.make("http://example.com/hello", Uuid.Url);

/* Using a custom namespace */
let uuid = Uuid.V3.make("Hello, world!", Uuid.Custom("1b671a64-40d5-491e-99b0-da01ff1f3341"));
```

### Version 4 (random)

```reason
let uuidv4 = Uuid.V4.make();
```

or

```reason
let uuidv4 = Uuid.make();
```

### Version 5 (namespace)

```reason
/* Using predefined DNS namespace */
let uuidv5_1 = Uuid.V5.make("hello.example.com", Uuid.DNS);

/* Using predefined URL namespace */
let uuidv5_2 = Uuid.V5.make("http://example.com/hello", Uuid.URL);

/* Using a custom namespace */
let namespace = "1b671a64-40d5-491e-99b0-da01ff1f3341";
let uuidv5_3 = Uuid.V5.make("Hello, world!", Uuid.Custom(namespace)));
```
