#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYLANGSPR__13EventCtrlTaskFv
// Address: 0x1e40b0 - 0x1e4110
void ENTRYLANGSPR__13EventCtrlTaskFv_0x1e40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYLANGSPR__13EventCtrlTaskFv");


    ctx->pc = 0x1e40b0u;

    // 0x1e40b0: 0x27bdffe0
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e40b4: 0x7fbf0010
    ctx->pc = 0x1e40b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e40b8: 0x7fb00000
    ctx->pc = 0x1e40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e40bc: 0x70808628
    ctx->pc = 0x1e40bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e40c0: 0x8c84000c
    ctx->pc = 0x1e40c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e40c4: 0x3c010050
    ctx->pc = 0x1e40c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e40c8: 0x8023fec5
    ctx->pc = 0x1e40c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e40cc: 0x8c840004
    ctx->pc = 0x1e40ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e40d0: 0x31840
    ctx->pc = 0x1e40d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e40d4: 0x831821
    ctx->pc = 0x1e40d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e40d8: 0x94630000
    ctx->pc = 0x1e40d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e40dc: 0x10600005
    ctx->pc = 0x1E40DCu;
    {
        const bool branch_taken_0x1e40dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e40dc) {
            ctx->pc = 0x1E40F4u;
            goto label_1e40f4;
        }
    }
    ctx->pc = 0x1E40E4u;
    // 0x1e40e4: 0x3c020051
    ctx->pc = 0x1e40e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e40e8: 0x3065ffff
    ctx->pc = 0x1e40e8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1e40ec: 0xc086578
    ctx->pc = 0x1E40ECu;
    SET_GPR_U32(ctx, 31, 0x1E40F4u);
    ctx->pc = 0x1E40F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40F4u; }
        else if (ctx->pc != 0x1E40F4u) { ctx->pc = 0x1E40F4u; }
    }
    if (ctx->pc != 0x1E40F4u) { return; }
    ctx->pc = 0x1E40F4u;
label_1e40f4:
    // 0x1e40f4: 0x8e03000c
    ctx->pc = 0x1e40f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e40f8: 0x24630008
    ctx->pc = 0x1e40f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e40fc: 0xae03000c
    ctx->pc = 0x1e40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4100: 0x7bbf0010
    ctx->pc = 0x1e4100u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4104: 0x7bb00000
    ctx->pc = 0x1e4104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4108: 0x3e00008
    ctx->pc = 0x1E4108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E410Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E40F4u: goto label_1e40f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4110u;
}
