#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyechofc
// Address: 0x2d1c90 - 0x2d1d74
void xyechofc_0x2d1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1c90u;

    // 0x2d1c90: 0x27bdff10
    ctx->pc = 0x2d1c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d1c94: 0xffbf0080
    ctx->pc = 0x2d1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d1c98: 0xffb20070
    ctx->pc = 0x2d1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d1c9c: 0xffb10060
    ctx->pc = 0x2d1c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d1ca0: 0xffb00050
    ctx->pc = 0x2d1ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d1ca4: 0x80802d
    ctx->pc = 0x2d1ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ca8: 0xa0902d
    ctx->pc = 0x2d1ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cac: 0xc0882d
    ctx->pc = 0x2d1cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cb0: 0xffa800d0
    ctx->pc = 0x2d1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2d1cb4: 0xffa900d8
    ctx->pc = 0x2d1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2d1cb8: 0xffaa00e0
    ctx->pc = 0x2d1cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2d1cbc: 0xffab00e8
    ctx->pc = 0x2d1cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2d1cc0: 0x3c02003a
    ctx->pc = 0x2d1cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1cc4: 0x8c421bdc
    ctx->pc = 0x2d1cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d1cc8: 0x10400024
    ctx->pc = 0x2D1CC8u;
    {
        const bool branch_taken_0x2d1cc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1CCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cc8) {
            ctx->pc = 0x2D1D5Cu;
            goto label_2d1d5c;
        }
    }
    ctx->pc = 0x2D1CD0u;
    // 0x2d1cd0: 0x2402ffff
    ctx->pc = 0x2d1cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1cd4: 0x16220002
    ctx->pc = 0x2D1CD4u;
    {
        const bool branch_taken_0x2d1cd4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D1CD8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d1cd4) {
            ctx->pc = 0x2D1CE0u;
            goto label_2d1ce0;
        }
    }
    ctx->pc = 0x2D1CDCu;
    // 0x2d1cdc: 0x8c712250
    ctx->pc = 0x2d1cdcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d1ce0:
    // 0x2d1ce0: 0x26220001
    ctx->pc = 0x2d1ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d1ce4: 0xac622250
    ctx->pc = 0x2d1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d1ce8: 0x3a0202d
    ctx->pc = 0x2d1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cec: 0xc0b5d5e
    ctx->pc = 0x2D1CECu;
    SET_GPR_U32(ctx, 31, 0x2D1CF4u);
    ctx->pc = 0x2D1CF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CF4u; }
    }
    if (ctx->pc != 0x2D1CF4u) { return; }
    ctx->pc = 0x2D1CF4u;
    // 0x2d1cf4: 0xc0b144c
    ctx->pc = 0x2D1CF4u;
    SET_GPR_U32(ctx, 31, 0x2D1CFCu);
    ctx->pc = 0x2D1CF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CFCu; }
    }
    if (ctx->pc != 0x2D1CFCu) { return; }
    ctx->pc = 0x2D1CFCu;
    // 0x2d1cfc: 0x40802d
    ctx->pc = 0x2d1cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d00: 0x1220c0
    ctx->pc = 0x2d1d00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d1d04: 0x1128c0
    ctx->pc = 0x2d1d04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d1d08: 0xc0b13be
    ctx->pc = 0x2D1D08u;
    SET_GPR_U32(ctx, 31, 0x2D1D10u);
    ctx->pc = 0x2D1D0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D10u; }
    }
    if (ctx->pc != 0x2D1D10u) { return; }
    ctx->pc = 0x2D1D10u;
    // 0x2d1d10: 0x40882d
    ctx->pc = 0x2d1d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d14: 0xc0b144c
    ctx->pc = 0x2D1D14u;
    SET_GPR_U32(ctx, 31, 0x2D1D1Cu);
    ctx->pc = 0x2D1D18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D1Cu; }
    }
    if (ctx->pc != 0x2D1D1Cu) { return; }
    ctx->pc = 0x2D1D1Cu;
    // 0x2d1d1c: 0x1220000f
    ctx->pc = 0x2D1D1Cu;
    {
        const bool branch_taken_0x2d1d1c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1D20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1d1c) {
            ctx->pc = 0x2D1D5Cu;
            goto label_2d1d5c;
        }
    }
    ctx->pc = 0x2D1D24u;
    // 0x2d1d24: 0x8c421be4
    ctx->pc = 0x2d1d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7140)));
    // 0x2d1d28: 0x10400004
    ctx->pc = 0x2D1D28u;
    {
        const bool branch_taken_0x2d1d28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1D2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
        if (branch_taken_0x2d1d28) {
            ctx->pc = 0x2D1D3Cu;
            goto label_2d1d3c;
        }
    }
    ctx->pc = 0x2D1D30u;
    // 0x2d1d30: 0x8e220000
    ctx->pc = 0x2d1d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1d34: 0x431025
    ctx->pc = 0x2d1d34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1d38: 0xae220000
    ctx->pc = 0x2d1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1d3c:
    // 0x2d1d3c: 0x12200007
    ctx->pc = 0x2D1D3Cu;
    {
        const bool branch_taken_0x2d1d3c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1D40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1d3c) {
            ctx->pc = 0x2D1D5Cu;
            goto label_2d1d5c;
        }
    }
    ctx->pc = 0x2D1D44u;
    // 0x2d1d44: 0x8c421be8
    ctx->pc = 0x2d1d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d1d48: 0x10400005
    ctx->pc = 0x2D1D48u;
    {
        const bool branch_taken_0x2d1d48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2d1d48) {
            ctx->pc = 0x2D1D60u;
            goto label_2d1d60;
        }
    }
    ctx->pc = 0x2D1D50u;
    // 0x2d1d50: 0x8e220000
    ctx->pc = 0x2d1d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1d54: 0x34420008
    ctx->pc = 0x2d1d54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d1d58: 0xae220000
    ctx->pc = 0x2d1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1d5c:
    // 0x2d1d5c: 0xdfbf0080
    ctx->pc = 0x2d1d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d1d60:
    // 0x2d1d60: 0xdfb20070
    ctx->pc = 0x2d1d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1d64: 0xdfb10060
    ctx->pc = 0x2d1d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1d68: 0xdfb00050
    ctx->pc = 0x2d1d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1d6c: 0x3e00008
    ctx->pc = 0x2D1D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1CE0u: goto label_2d1ce0;
            case 0x2D1D3Cu: goto label_2d1d3c;
            case 0x2D1D5Cu: goto label_2d1d5c;
            case 0x2D1D60u: goto label_2d1d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1D74u;
}
