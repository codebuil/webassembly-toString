(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "toInteger" (func $toInteger))
 (func $toInteger (; 0 ;) (param $0 f32) (result i32)
  (i32.trunc_s/f32
   (get_local $0)
  )
 )
)
