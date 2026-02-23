#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PushLight__13LightCtrlTaskFv
// Address: 0x1f0b70 - 0x1f0ca4
void PushLight__13LightCtrlTaskFv_0x1f0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PushLight__13LightCtrlTaskFv");


    ctx->pc = 0x1f0b70u;

    // 0x1f0b70: 0x8c83000c
    ctx->pc = 0x1f0b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0b74: 0x24630001
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f0b78: 0xac83000c
    ctx->pc = 0x1f0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1f0b7c: 0x28630004
    ctx->pc = 0x1f0b7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4));
    // 0x1f0b80: 0x14600002
    ctx->pc = 0x1F0B80u;
    {
        const bool branch_taken_0x1f0b80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0B84u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f0b80) {
            ctx->pc = 0x1F0B8Cu;
            goto label_1f0b8c;
        }
    }
    ctx->pc = 0x1F0B88u;
    // 0x1f0b88: 0xac83000c
    ctx->pc = 0x1f0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1f0b8c:
    // 0x1f0b8c: 0x8c87000c
    ctx->pc = 0x1f0b8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0b90: 0x24e5ffff
    ctx->pc = 0x1f0b90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f0b94: 0x51840
    ctx->pc = 0x1f0b94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f0b98: 0x651821
    ctx->pc = 0x1f0b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0b9c: 0x318c0
    ctx->pc = 0x1f0b9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0ba0: 0x651823
    ctx->pc = 0x1f0ba0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0ba4: 0x31880
    ctx->pc = 0x1f0ba4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0ba8: 0x833021
    ctx->pc = 0x1f0ba8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f0bac: 0x71840
    ctx->pc = 0x1f0bacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1f0bb0: 0x671821
    ctx->pc = 0x1f0bb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f0bb4: 0x318c0
    ctx->pc = 0x1f0bb4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0bb8: 0x671823
    ctx->pc = 0x1f0bb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f0bbc: 0x31880
    ctx->pc = 0x1f0bbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0bc0: 0xc4c00010
    ctx->pc = 0x1f0bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0bc4: 0x832821
    ctx->pc = 0x1f0bc4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f0bc8: 0xe4a00010
    ctx->pc = 0x1f0bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1f0bcc: 0xc4c00014
    ctx->pc = 0x1f0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0bd0: 0xe4a00014
    ctx->pc = 0x1f0bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1f0bd4: 0xc4c00018
    ctx->pc = 0x1f0bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0bd8: 0xe4a00018
    ctx->pc = 0x1f0bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1f0bdc: 0xc4c0001c
    ctx->pc = 0x1f0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0be0: 0xe4a0001c
    ctx->pc = 0x1f0be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1f0be4: 0xc4c00020
    ctx->pc = 0x1f0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0be8: 0xe4a00020
    ctx->pc = 0x1f0be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1f0bec: 0xc4c00024
    ctx->pc = 0x1f0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0bf0: 0xe4a00024
    ctx->pc = 0x1f0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x1f0bf4: 0xc4c00028
    ctx->pc = 0x1f0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0bf8: 0xe4a00028
    ctx->pc = 0x1f0bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1f0bfc: 0xc4c0002c
    ctx->pc = 0x1f0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c00: 0xe4a0002c
    ctx->pc = 0x1f0c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x1f0c04: 0xc4c00030
    ctx->pc = 0x1f0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c08: 0xe4a00030
    ctx->pc = 0x1f0c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x1f0c0c: 0xc4c00034
    ctx->pc = 0x1f0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c10: 0xe4a00034
    ctx->pc = 0x1f0c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1f0c14: 0xc4c00038
    ctx->pc = 0x1f0c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c18: 0xe4a00038
    ctx->pc = 0x1f0c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x1f0c1c: 0xc4c0003c
    ctx->pc = 0x1f0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c20: 0xe4a0003c
    ctx->pc = 0x1f0c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1f0c24: 0xc4c00040
    ctx->pc = 0x1f0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c28: 0xe4a00040
    ctx->pc = 0x1f0c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x1f0c2c: 0xc4c00044
    ctx->pc = 0x1f0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c30: 0xe4a00044
    ctx->pc = 0x1f0c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x1f0c34: 0xc4c00048
    ctx->pc = 0x1f0c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c38: 0xe4a00048
    ctx->pc = 0x1f0c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x1f0c3c: 0xc4c0004c
    ctx->pc = 0x1f0c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c40: 0xe4a0004c
    ctx->pc = 0x1f0c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x1f0c44: 0xc4c00050
    ctx->pc = 0x1f0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c48: 0xe4a00050
    ctx->pc = 0x1f0c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x1f0c4c: 0xc4c00054
    ctx->pc = 0x1f0c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c50: 0xe4a00054
    ctx->pc = 0x1f0c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x1f0c54: 0x8cc30058
    ctx->pc = 0x1f0c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1f0c58: 0xaca30058
    ctx->pc = 0x1f0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
    // 0x1f0c5c: 0x8cc3005c
    ctx->pc = 0x1f0c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x1f0c60: 0xaca3005c
    ctx->pc = 0x1f0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
    // 0x1f0c64: 0xc4c00060
    ctx->pc = 0x1f0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c68: 0xe4a00060
    ctx->pc = 0x1f0c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x1f0c6c: 0xc4c00064
    ctx->pc = 0x1f0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c70: 0xe4a00064
    ctx->pc = 0x1f0c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x1f0c74: 0xc4c00068
    ctx->pc = 0x1f0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0c78: 0xe4a00068
    ctx->pc = 0x1f0c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x1f0c7c: 0x8c85000c
    ctx->pc = 0x1f0c7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0c80: 0x51840
    ctx->pc = 0x1f0c80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f0c84: 0x651821
    ctx->pc = 0x1f0c84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0c88: 0x318c0
    ctx->pc = 0x1f0c88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0c8c: 0x651823
    ctx->pc = 0x1f0c8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0c90: 0x31880
    ctx->pc = 0x1f0c90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0c94: 0x831821
    ctx->pc = 0x1f0c94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f0c98: 0x24630010
    ctx->pc = 0x1f0c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f0c9c: 0x3e00008
    ctx->pc = 0x1F0C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0CA0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0B8Cu: goto label_1f0b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0CA4u;
}
