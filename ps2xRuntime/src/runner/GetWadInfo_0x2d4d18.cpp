#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetWadInfo
// Address: 0x2d4d18 - 0x2d4de0
void GetWadInfo_0x2d4d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4d18u;

    // 0x2d4d18: 0x27bdffd0
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4d1c: 0xffbf0020
    ctx->pc = 0x2d4d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4d20: 0xffb10010
    ctx->pc = 0x2d4d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d4d24: 0xffb00000
    ctx->pc = 0x2d4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4d28: 0x80302d
    ctx->pc = 0x2d4d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d2c: 0xa0382d
    ctx->pc = 0x2d4d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d30: 0x3c02003a
    ctx->pc = 0x2d4d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4d34: 0x8c512324
    ctx->pc = 0x2d4d34u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 8996)));
    // 0x2d4d38: 0x3c10003a
    ctx->pc = 0x2d4d38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4d3c: 0x260423a8
    ctx->pc = 0x2d4d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    // 0x2d4d40: 0x3c05003b
    ctx->pc = 0x2d4d40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d4d44: 0xc0b6252
    ctx->pc = 0x2D4D44u;
    SET_GPR_U32(ctx, 31, 0x2D4D4Cu);
    ctx->pc = 0x2D4D48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31936));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D4Cu; }
    }
    if (ctx->pc != 0x2D4D4Cu) { return; }
    ctx->pc = 0x2D4D4Cu;
    // 0x2d4d4c: 0x260423a8
    ctx->pc = 0x2d4d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    // 0x2d4d50: 0xc0bf49e
    ctx->pc = 0x2D4D50u;
    SET_GPR_U32(ctx, 31, 0x2D4D58u);
    ctx->pc = 0x2D4D54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x2FD278u;
    {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x2fd278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D58u; }
    }
    if (ctx->pc != 0x2D4D58u) { return; }
    ctx->pc = 0x2D4D58u;
    // 0x2d4d58: 0x54400006
    ctx->pc = 0x2D4D58u;
    {
        const bool branch_taken_0x2d4d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d4d58) {
            ctx->pc = 0x2D4D5Cu;
            SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
            ctx->pc = 0x2D4D74u;
            goto label_2d4d74;
        }
    }
    ctx->pc = 0x2D4D60u;
    // 0x2d4d60: 0x260423a8
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    // 0x2d4d64: 0x3c05003b
    ctx->pc = 0x2d4d64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d4d68: 0xc0bf1c1
    ctx->pc = 0x2D4D68u;
    SET_GPR_U32(ctx, 31, 0x2D4D70u);
    ctx->pc = 0x2D4D6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30944));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D70u; }
    }
    if (ctx->pc != 0x2D4D70u) { return; }
    ctx->pc = 0x2D4D70u;
    // 0x2d4d70: 0x3c10003a
    ctx->pc = 0x2d4d70u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2d4d74:
    // 0x2d4d74: 0xc0b4dbe
    ctx->pc = 0x2D4D74u;
    SET_GPR_U32(ctx, 31, 0x2D4D7Cu);
    ctx->pc = 0x2D4D78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    ctx->pc = 0x2D36F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BackslashMe_0x2d36f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D7Cu; }
    }
    if (ctx->pc != 0x2D4D7Cu) { return; }
    ctx->pc = 0x2D4D7Cu;
    // 0x2d4d7c: 0xc08027c
    ctx->pc = 0x2D4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D84u);
    ctx->pc = 0x2D4D80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    ctx->pc = 0x2009F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fed_upper_0x2009f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D84u; }
    }
    if (ctx->pc != 0x2D4D84u) { return; }
    ctx->pc = 0x2D4D84u;
    // 0x2d4d84: 0xc0b52b4
    ctx->pc = 0x2D4D84u;
    SET_GPR_U32(ctx, 31, 0x2D4D8Cu);
    ctx->pc = 0x2D4D88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 9128));
    ctx->pc = 0x2D4AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hash_me_0x2d4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D8Cu; }
    }
    if (ctx->pc != 0x2D4D8Cu) { return; }
    ctx->pc = 0x2D4D8Cu;
    // 0x2d4d8c: 0x40282d
    ctx->pc = 0x2d4d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d90: 0x3c02003a
    ctx->pc = 0x2d4d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4d94: 0x8c422320
    ctx->pc = 0x2d4d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8992)));
    // 0x2d4d98: 0x1840000b
    ctx->pc = 0x2D4D98u;
    {
        const bool branch_taken_0x2d4d98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D4D9Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d98) {
            ctx->pc = 0x2D4DC8u;
            goto label_2d4dc8;
        }
    }
    ctx->pc = 0x2D4DA0u;
    // 0x2d4da0: 0x3c02003a
    ctx->pc = 0x2d4da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4da4: 0x8c442320
    ctx->pc = 0x2d4da4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8992)));
label_2d4da8:
    // 0x2d4da8: 0x8e220008
    ctx->pc = 0x2d4da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d4dac: 0x54a20003
    ctx->pc = 0x2D4DACu;
    {
        const bool branch_taken_0x2d4dac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d4dac) {
            ctx->pc = 0x2D4DB0u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2D4DBCu;
            goto label_2d4dbc;
        }
    }
    ctx->pc = 0x2D4DB4u;
    // 0x2d4db4: 0x10000005
    ctx->pc = 0x2D4DB4u;
    {
        const bool branch_taken_0x2d4db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4DB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4db4) {
            ctx->pc = 0x2D4DCCu;
            goto label_2d4dcc;
        }
    }
    ctx->pc = 0x2D4DBCu;
label_2d4dbc:
    // 0x2d4dbc: 0x64102a
    ctx->pc = 0x2d4dbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2d4dc0: 0x1440fff9
    ctx->pc = 0x2D4DC0u;
    {
        const bool branch_taken_0x2d4dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4DC4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2d4dc0) {
            ctx->pc = 0x2D4DA8u;
            goto label_2d4da8;
        }
    }
    ctx->pc = 0x2D4DC8u;
label_2d4dc8:
    // 0x2d4dc8: 0x102d
    ctx->pc = 0x2d4dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4dcc:
    // 0x2d4dcc: 0xdfbf0020
    ctx->pc = 0x2d4dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4dd0: 0xdfb10010
    ctx->pc = 0x2d4dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4dd4: 0xdfb00000
    ctx->pc = 0x2d4dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4dd8: 0x3e00008
    ctx->pc = 0x2D4DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4DDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4D74u: goto label_2d4d74;
            case 0x2D4DA8u: goto label_2d4da8;
            case 0x2D4DBCu: goto label_2d4dbc;
            case 0x2D4DC8u: goto label_2d4dc8;
            case 0x2D4DCCu: goto label_2d4dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4DE0u;
}
