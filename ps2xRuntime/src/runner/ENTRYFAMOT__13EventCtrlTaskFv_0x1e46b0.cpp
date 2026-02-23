#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYFAMOT__13EventCtrlTaskFv
// Address: 0x1e46b0 - 0x1e4728
void ENTRYFAMOT__13EventCtrlTaskFv_0x1e46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYFAMOT__13EventCtrlTaskFv");


    ctx->pc = 0x1e46b0u;

    // 0x1e46b0: 0x27bdffc0
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e46b4: 0x7fbf0030
    ctx->pc = 0x1e46b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e46b8: 0x7fb20020
    ctx->pc = 0x1e46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e46bc: 0x7fb10010
    ctx->pc = 0x1e46bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e46c0: 0x7fb00000
    ctx->pc = 0x1e46c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e46c4: 0x70808628
    ctx->pc = 0x1e46c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e46c8: 0x70008e28
    ctx->pc = 0x1e46c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e46cc: 0x10000006
    ctx->pc = 0x1E46CCu;
    {
        const bool branch_taken_0x1e46cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E46D0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e46cc) {
            ctx->pc = 0x1E46E8u;
            goto label_1e46e8;
        }
    }
    ctx->pc = 0x1E46D4u;
label_1e46d4:
    // 0x1e46d4: 0xc086670
    ctx->pc = 0x1E46D4u;
    SET_GPR_U32(ctx, 31, 0x1E46DCu);
    ctx->pc = 0x1E46D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2199C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotData__13EntryDatClassFi_0x2199c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46DCu; }
        else if (ctx->pc != 0x1E46DCu) { ctx->pc = 0x1E46DCu; }
    }
    if (ctx->pc != 0x1E46DCu) { return; }
    ctx->pc = 0x1E46DCu;
    // 0x1e46dc: 0x26520004
    ctx->pc = 0x1e46dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e46e0: 0x26310001
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e46e4: 0x0
    ctx->pc = 0x1e46e4u;
    // NOP
label_1e46e8:
    // 0x1e46e8: 0x8e06000c
    ctx->pc = 0x1e46e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e46ec: 0x2403ffff
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e46f0: 0xd22021
    ctx->pc = 0x1e46f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e46f4: 0x8c850004
    ctx->pc = 0x1e46f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e46f8: 0x54a3fff6
    ctx->pc = 0x1E46F8u;
    {
        const bool branch_taken_0x1e46f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e46f8) {
            ctx->pc = 0x1E46FCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
            ctx->pc = 0x1E46D4u;
            goto label_1e46d4;
        }
    }
    ctx->pc = 0x1E4700u;
    // 0x1e4700: 0x26230002
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e4704: 0x31880
    ctx->pc = 0x1e4704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4708: 0xc31821
    ctx->pc = 0x1e4708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e470c: 0xae03000c
    ctx->pc = 0x1e470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4710: 0x7bbf0030
    ctx->pc = 0x1e4710u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4714: 0x7bb20020
    ctx->pc = 0x1e4714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4718: 0x7bb10010
    ctx->pc = 0x1e4718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e471c: 0x7bb00000
    ctx->pc = 0x1e471cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4720: 0x3e00008
    ctx->pc = 0x1E4720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E46D4u: goto label_1e46d4;
            case 0x1E46E8u: goto label_1e46e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4728u;
}
