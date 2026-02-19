#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerUnsetParent
// Address: 0x236de8 - 0x236e68
void PlayerUnsetParent_0x236de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236de8u;

    // 0x236de8: 0x27bdffa0
    ctx->pc = 0x236de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236dec: 0xffbf0050
    ctx->pc = 0x236decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x236df0: 0xffb00040
    ctx->pc = 0x236df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x236df4: 0x24020001
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x236df8: 0x14a20007
    ctx->pc = 0x236DF8u;
    {
        const bool branch_taken_0x236df8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x236DFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236df8) {
            ctx->pc = 0x236E18u;
            goto label_236e18;
        }
    }
    ctx->pc = 0x236E00u;
    // 0x236e00: 0xc60000f0
    ctx->pc = 0x236e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e04: 0xe6000050
    ctx->pc = 0x236e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x236e08: 0xc60000f4
    ctx->pc = 0x236e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e0c: 0xe6000054
    ctx->pc = 0x236e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x236e10: 0xc60000f8
    ctx->pc = 0x236e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e14: 0xe6000058
    ctx->pc = 0x236e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_236e18:
    // 0x236e18: 0x8e020080
    ctx->pc = 0x236e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236e1c: 0xc6000050
    ctx->pc = 0x236e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e20: 0xe4400030
    ctx->pc = 0x236e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x236e24: 0x8e020080
    ctx->pc = 0x236e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236e28: 0xc6000054
    ctx->pc = 0x236e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e2c: 0xe4400034
    ctx->pc = 0x236e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x236e30: 0x8e020080
    ctx->pc = 0x236e30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236e34: 0xc6000058
    ctx->pc = 0x236e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e38: 0xe4400038
    ctx->pc = 0x236e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x236e3c: 0x3c020033
    ctx->pc = 0x236e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236e40: 0x8e040080
    ctx->pc = 0x236e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236e44: 0xc0b3f94
    ctx->pc = 0x236E44u;
    SET_GPR_U32(ctx, 31, 0x236E4Cu);
    ctx->pc = 0x236E48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952896)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E4Cu; }
    }
    if (ctx->pc != 0x236E4Cu) { return; }
    ctx->pc = 0x236E4Cu;
    // 0x236e4c: 0x9602093c
    ctx->pc = 0x236e4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x236e50: 0x3042ffdf
    ctx->pc = 0x236e50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65503));
    // 0x236e54: 0xa602093c
    ctx->pc = 0x236e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
    // 0x236e58: 0xdfbf0050
    ctx->pc = 0x236e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236e5c: 0xdfb00040
    ctx->pc = 0x236e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236e60: 0x3e00008
    ctx->pc = 0x236E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236E18u: goto label_236e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236E68u;
}
