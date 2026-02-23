#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11FogCtrlTaskFv
// Address: 0x1e9dd0 - 0x1e9ef0
void init__11FogCtrlTaskFv_0x1e9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11FogCtrlTaskFv");


    ctx->pc = 0x1e9dd0u;

    // 0x1e9dd0: 0x3c010050
    ctx->pc = 0x1e9dd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9dd4: 0xa4200cfc
    ctx->pc = 0x1e9dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3324), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e9dd8: 0x240300ff
    ctx->pc = 0x1e9dd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e9ddc: 0x3c010050
    ctx->pc = 0x1e9ddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9de0: 0xac230cd0
    ctx->pc = 0x1e9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3280), GPR_U32(ctx, 3));
    // 0x1e9de4: 0x3c010050
    ctx->pc = 0x1e9de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9de8: 0xac230cd4
    ctx->pc = 0x1e9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3284), GPR_U32(ctx, 3));
    // 0x1e9dec: 0x3c010050
    ctx->pc = 0x1e9decu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9df0: 0xac230cd8
    ctx->pc = 0x1e9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3288), GPR_U32(ctx, 3));
    // 0x1e9df4: 0x3c010050
    ctx->pc = 0x1e9df4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9df8: 0xac230cdc
    ctx->pc = 0x1e9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3292), GPR_U32(ctx, 3));
    // 0x1e9dfc: 0x3c010050
    ctx->pc = 0x1e9dfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e00: 0xac200ce0
    ctx->pc = 0x1e9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3296), GPR_U32(ctx, 0));
    // 0x1e9e04: 0x3c03447a
    ctx->pc = 0x1e9e04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17530 << 16));
    // 0x1e9e08: 0x3c010050
    ctx->pc = 0x1e9e08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e0c: 0xac230ce4
    ctx->pc = 0x1e9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3300), GPR_U32(ctx, 3));
    // 0x1e9e10: 0x3c010050
    ctx->pc = 0x1e9e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e14: 0xac200ce8
    ctx->pc = 0x1e9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3304), GPR_U32(ctx, 0));
    // 0x1e9e18: 0x34038000
    ctx->pc = 0x1e9e18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1e9e1c: 0x3c010050
    ctx->pc = 0x1e9e1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e20: 0xac230cec
    ctx->pc = 0x1e9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3308), GPR_U32(ctx, 3));
    // 0x1e9e24: 0x3c010050
    ctx->pc = 0x1e9e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e28: 0xac200cf8
    ctx->pc = 0x1e9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3320), GPR_U32(ctx, 0));
    // 0x1e9e2c: 0x3c010050
    ctx->pc = 0x1e9e2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e30: 0xac200cf4
    ctx->pc = 0x1e9e30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3316), GPR_U32(ctx, 0));
    // 0x1e9e34: 0x3c010050
    ctx->pc = 0x1e9e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9e38: 0xac200cf0
    ctx->pc = 0x1e9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3312), GPR_U32(ctx, 0));
    // 0x1e9e3c: 0x3c010027
    ctx->pc = 0x1e9e3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1e9e40: 0x8c23c080
    ctx->pc = 0x1e9e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294951040)));
    // 0x1e9e44: 0xac830044
    ctx->pc = 0x1e9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1e9e48: 0x3c010027
    ctx->pc = 0x1e9e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1e9e4c: 0xc420c084
    ctx->pc = 0x1e9e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e50: 0xe4800048
    ctx->pc = 0x1e9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1e9e54: 0x3c010027
    ctx->pc = 0x1e9e54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1e9e58: 0xc420c088
    ctx->pc = 0x1e9e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e5c: 0xe480004c
    ctx->pc = 0x1e9e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x1e9e60: 0x3c010027
    ctx->pc = 0x1e9e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1e9e64: 0xc420c08c
    ctx->pc = 0x1e9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e68: 0xe4800050
    ctx->pc = 0x1e9e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1e9e6c: 0x8c830044
    ctx->pc = 0x1e9e6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1e9e70: 0xac830034
    ctx->pc = 0x1e9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x1e9e74: 0xc4800048
    ctx->pc = 0x1e9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e78: 0xe4800038
    ctx->pc = 0x1e9e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1e9e7c: 0xc480004c
    ctx->pc = 0x1e9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e80: 0xe480003c
    ctx->pc = 0x1e9e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1e9e84: 0xc4800050
    ctx->pc = 0x1e9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e88: 0xe4800040
    ctx->pc = 0x1e9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1e9e8c: 0x8c830034
    ctx->pc = 0x1e9e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1e9e90: 0xac830024
    ctx->pc = 0x1e9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1e9e94: 0xc4800038
    ctx->pc = 0x1e9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e98: 0xe4800028
    ctx->pc = 0x1e9e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1e9e9c: 0xc480003c
    ctx->pc = 0x1e9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ea0: 0xe480002c
    ctx->pc = 0x1e9ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1e9ea4: 0xc4800040
    ctx->pc = 0x1e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ea8: 0xe4800030
    ctx->pc = 0x1e9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1e9eac: 0x8c830024
    ctx->pc = 0x1e9eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e9eb0: 0xac830014
    ctx->pc = 0x1e9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1e9eb4: 0xc4800028
    ctx->pc = 0x1e9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9eb8: 0xe4800018
    ctx->pc = 0x1e9eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1e9ebc: 0xc480002c
    ctx->pc = 0x1e9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ec0: 0xe480001c
    ctx->pc = 0x1e9ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1e9ec4: 0xc4800030
    ctx->pc = 0x1e9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ec8: 0xe4800020
    ctx->pc = 0x1e9ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1e9ecc: 0x8c830014
    ctx->pc = 0x1e9eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e9ed0: 0xac830004
    ctx->pc = 0x1e9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1e9ed4: 0xc4800018
    ctx->pc = 0x1e9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ed8: 0xe4800008
    ctx->pc = 0x1e9ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e9edc: 0xc480001c
    ctx->pc = 0x1e9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ee0: 0xe480000c
    ctx->pc = 0x1e9ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e9ee4: 0xc4800020
    ctx->pc = 0x1e9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ee8: 0x3e00008
    ctx->pc = 0x1E9EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9EECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9EF0u;
}
