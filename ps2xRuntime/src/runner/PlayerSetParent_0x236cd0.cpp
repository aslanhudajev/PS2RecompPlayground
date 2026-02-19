#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSetParent
// Address: 0x236cd0 - 0x236d70
void PlayerSetParent_0x236cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236cd0u;

    // 0x236cd0: 0x27bdffd0
    ctx->pc = 0x236cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236cd4: 0xffbf0020
    ctx->pc = 0x236cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236cd8: 0xffb10010
    ctx->pc = 0x236cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236cdc: 0xffb00000
    ctx->pc = 0x236cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236ce0: 0x80802d
    ctx->pc = 0x236ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ce4: 0xc0882d
    ctx->pc = 0x236ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ce8: 0xc6000050
    ctx->pc = 0x236ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236cec: 0xe60000f0
    ctx->pc = 0x236cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x236cf0: 0xc6000054
    ctx->pc = 0x236cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236cf4: 0xe60000f4
    ctx->pc = 0x236cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x236cf8: 0xc6000058
    ctx->pc = 0x236cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236cfc: 0xe60000f8
    ctx->pc = 0x236cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x236d00: 0xc0b3f94
    ctx->pc = 0x236D00u;
    SET_GPR_U32(ctx, 31, 0x236D08u);
    ctx->pc = 0x236D04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D08u; }
    }
    if (ctx->pc != 0x236D08u) { return; }
    ctx->pc = 0x236D08u;
    // 0x236d08: 0x3c04003a
    ctx->pc = 0x236d08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x236d0c: 0x24842550
    ctx->pc = 0x236d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x236d10: 0xc0b5494
    ctx->pc = 0x236D10u;
    SET_GPR_U32(ctx, 31, 0x236D18u);
    ctx->pc = 0x236D14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D18u; }
    }
    if (ctx->pc != 0x236D18u) { return; }
    ctx->pc = 0x236D18u;
    // 0x236d18: 0x1220000a
    ctx->pc = 0x236D18u;
    {
        const bool branch_taken_0x236d18 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x236D1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x236d18) {
            ctx->pc = 0x236D44u;
            goto label_236d44;
        }
    }
    ctx->pc = 0x236D20u;
    // 0x236d20: 0x8e020080
    ctx->pc = 0x236d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236d24: 0xc6200000
    ctx->pc = 0x236d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236d28: 0xe4400030
    ctx->pc = 0x236d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x236d2c: 0x8e020080
    ctx->pc = 0x236d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236d30: 0xc6200004
    ctx->pc = 0x236d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236d34: 0xe4400034
    ctx->pc = 0x236d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x236d38: 0x8e020080
    ctx->pc = 0x236d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x236d3c: 0xc6200008
    ctx->pc = 0x236d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236d40: 0xe4400038
    ctx->pc = 0x236d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_236d44:
    // 0x236d44: 0x2605081c
    ctx->pc = 0x236d44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2076));
    // 0x236d48: 0xc080d02
    ctx->pc = 0x236D48u;
    SET_GPR_U32(ctx, 31, 0x236D50u);
    ctx->pc = 0x236D4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2064));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D50u; }
    }
    if (ctx->pc != 0x236D50u) { return; }
    ctx->pc = 0x236D50u;
    // 0x236d50: 0x9602093c
    ctx->pc = 0x236d50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x236d54: 0x34420020
    ctx->pc = 0x236d54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
    // 0x236d58: 0xa602093c
    ctx->pc = 0x236d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
    // 0x236d5c: 0xdfbf0020
    ctx->pc = 0x236d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d60: 0xdfb10010
    ctx->pc = 0x236d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d64: 0xdfb00000
    ctx->pc = 0x236d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d68: 0x3e00008
    ctx->pc = 0x236D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236D44u: goto label_236d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236D70u;
}
