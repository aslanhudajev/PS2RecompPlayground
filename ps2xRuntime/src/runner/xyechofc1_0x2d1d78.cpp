#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyechofc1
// Address: 0x2d1d78 - 0x2d1e5c
void xyechofc1_0x2d1d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1d78u;

    // 0x2d1d78: 0x27bdff10
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d1d7c: 0xffbf0080
    ctx->pc = 0x2d1d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d1d80: 0xffb20070
    ctx->pc = 0x2d1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d1d84: 0xffb10060
    ctx->pc = 0x2d1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d1d88: 0xffb00050
    ctx->pc = 0x2d1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d1d8c: 0x80802d
    ctx->pc = 0x2d1d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d90: 0xa0902d
    ctx->pc = 0x2d1d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d94: 0xc0882d
    ctx->pc = 0x2d1d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d98: 0xffa800d0
    ctx->pc = 0x2d1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2d1d9c: 0xffa900d8
    ctx->pc = 0x2d1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2d1da0: 0xffaa00e0
    ctx->pc = 0x2d1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2d1da4: 0xffab00e8
    ctx->pc = 0x2d1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2d1da8: 0x3c02003a
    ctx->pc = 0x2d1da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1dac: 0x8c421bdc
    ctx->pc = 0x2d1dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d1db0: 0x10400024
    ctx->pc = 0x2D1DB0u;
    {
        const bool branch_taken_0x2d1db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1DB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d1db0) {
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1DB8u;
    // 0x2d1db8: 0x2402ffff
    ctx->pc = 0x2d1db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1dbc: 0x16220002
    ctx->pc = 0x2D1DBCu;
    {
        const bool branch_taken_0x2d1dbc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D1DC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d1dbc) {
            ctx->pc = 0x2D1DC8u;
            goto label_2d1dc8;
        }
    }
    ctx->pc = 0x2D1DC4u;
    // 0x2d1dc4: 0x8c712250
    ctx->pc = 0x2d1dc4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d1dc8:
    // 0x2d1dc8: 0x26220001
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d1dcc: 0xac622250
    ctx->pc = 0x2d1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d1dd0: 0x3a0202d
    ctx->pc = 0x2d1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1dd4: 0xc0b5d5e
    ctx->pc = 0x2D1DD4u;
    SET_GPR_U32(ctx, 31, 0x2D1DDCu);
    ctx->pc = 0x2D1DD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DDCu; }
    }
    if (ctx->pc != 0x2D1DDCu) { return; }
    ctx->pc = 0x2D1DDCu;
    // 0x2d1ddc: 0xc0b144c
    ctx->pc = 0x2D1DDCu;
    SET_GPR_U32(ctx, 31, 0x2D1DE4u);
    ctx->pc = 0x2D1DE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DE4u; }
    }
    if (ctx->pc != 0x2D1DE4u) { return; }
    ctx->pc = 0x2D1DE4u;
    // 0x2d1de4: 0x40802d
    ctx->pc = 0x2d1de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1de8: 0x240202d
    ctx->pc = 0x2d1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1dec: 0x220282d
    ctx->pc = 0x2d1decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df0: 0xc0b13be
    ctx->pc = 0x2D1DF0u;
    SET_GPR_U32(ctx, 31, 0x2D1DF8u);
    ctx->pc = 0x2D1DF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DF8u; }
    }
    if (ctx->pc != 0x2D1DF8u) { return; }
    ctx->pc = 0x2D1DF8u;
    // 0x2d1df8: 0x40882d
    ctx->pc = 0x2d1df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1dfc: 0xc0b144c
    ctx->pc = 0x2D1DFCu;
    SET_GPR_U32(ctx, 31, 0x2D1E04u);
    ctx->pc = 0x2D1E00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E04u; }
    }
    if (ctx->pc != 0x2D1E04u) { return; }
    ctx->pc = 0x2D1E04u;
    // 0x2d1e04: 0x1220000f
    ctx->pc = 0x2D1E04u;
    {
        const bool branch_taken_0x2d1e04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1E08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1e04) {
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1E0Cu;
    // 0x2d1e0c: 0x8c421be4
    ctx->pc = 0x2d1e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7140)));
    // 0x2d1e10: 0x10400004
    ctx->pc = 0x2D1E10u;
    {
        const bool branch_taken_0x2d1e10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1E14u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
        if (branch_taken_0x2d1e10) {
            ctx->pc = 0x2D1E24u;
            goto label_2d1e24;
        }
    }
    ctx->pc = 0x2D1E18u;
    // 0x2d1e18: 0x8e220000
    ctx->pc = 0x2d1e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1e1c: 0x431025
    ctx->pc = 0x2d1e1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1e20: 0xae220000
    ctx->pc = 0x2d1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1e24:
    // 0x2d1e24: 0x12200007
    ctx->pc = 0x2D1E24u;
    {
        const bool branch_taken_0x2d1e24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1E28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1e24) {
            ctx->pc = 0x2D1E44u;
            goto label_2d1e44;
        }
    }
    ctx->pc = 0x2D1E2Cu;
    // 0x2d1e2c: 0x8c421be8
    ctx->pc = 0x2d1e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d1e30: 0x10400005
    ctx->pc = 0x2D1E30u;
    {
        const bool branch_taken_0x2d1e30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1E34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2d1e30) {
            ctx->pc = 0x2D1E48u;
            goto label_2d1e48;
        }
    }
    ctx->pc = 0x2D1E38u;
    // 0x2d1e38: 0x8e220000
    ctx->pc = 0x2d1e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1e3c: 0x34420008
    ctx->pc = 0x2d1e3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d1e40: 0xae220000
    ctx->pc = 0x2d1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1e44:
    // 0x2d1e44: 0xdfbf0080
    ctx->pc = 0x2d1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d1e48:
    // 0x2d1e48: 0xdfb20070
    ctx->pc = 0x2d1e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1e4c: 0xdfb10060
    ctx->pc = 0x2d1e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1e50: 0xdfb00050
    ctx->pc = 0x2d1e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1e54: 0x3e00008
    ctx->pc = 0x2D1E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1E58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1DC8u: goto label_2d1dc8;
            case 0x2D1E24u: goto label_2d1e24;
            case 0x2D1E44u: goto label_2d1e44;
            case 0x2D1E48u: goto label_2d1e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1E5Cu;
}
