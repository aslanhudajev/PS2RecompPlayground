#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYFANI__13EventCtrlTaskFv
// Address: 0x1e45b0 - 0x1e4628
void ENTRYFANI__13EventCtrlTaskFv_0x1e45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYFANI__13EventCtrlTaskFv");


    ctx->pc = 0x1e45b0u;

    // 0x1e45b0: 0x27bdffc0
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e45b4: 0x7fbf0030
    ctx->pc = 0x1e45b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e45b8: 0x7fb20020
    ctx->pc = 0x1e45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e45bc: 0x7fb10010
    ctx->pc = 0x1e45bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e45c0: 0x7fb00000
    ctx->pc = 0x1e45c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e45c4: 0x70808628
    ctx->pc = 0x1e45c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e45c8: 0x70008e28
    ctx->pc = 0x1e45c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e45cc: 0x10000006
    ctx->pc = 0x1E45CCu;
    {
        const bool branch_taken_0x1e45cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E45D0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e45cc) {
            ctx->pc = 0x1E45E8u;
            goto label_1e45e8;
        }
    }
    ctx->pc = 0x1E45D4u;
label_1e45d4:
    // 0x1e45d4: 0xc086650
    ctx->pc = 0x1E45D4u;
    SET_GPR_U32(ctx, 31, 0x1E45DCu);
    ctx->pc = 0x1E45D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219940u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaniData__13EntryDatClassFi_0x219940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45DCu; }
        else if (ctx->pc != 0x1E45DCu) { ctx->pc = 0x1E45DCu; }
    }
    if (ctx->pc != 0x1E45DCu) { return; }
    ctx->pc = 0x1E45DCu;
    // 0x1e45dc: 0x26520004
    ctx->pc = 0x1e45dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e45e0: 0x26310001
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e45e4: 0x0
    ctx->pc = 0x1e45e4u;
    // NOP
label_1e45e8:
    // 0x1e45e8: 0x8e06000c
    ctx->pc = 0x1e45e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e45ec: 0x2403ffff
    ctx->pc = 0x1e45ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e45f0: 0xd22021
    ctx->pc = 0x1e45f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e45f4: 0x8c850004
    ctx->pc = 0x1e45f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e45f8: 0x54a3fff6
    ctx->pc = 0x1E45F8u;
    {
        const bool branch_taken_0x1e45f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e45f8) {
            ctx->pc = 0x1E45FCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
            ctx->pc = 0x1E45D4u;
            goto label_1e45d4;
        }
    }
    ctx->pc = 0x1E4600u;
    // 0x1e4600: 0x26230002
    ctx->pc = 0x1e4600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e4604: 0x31880
    ctx->pc = 0x1e4604u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4608: 0xc31821
    ctx->pc = 0x1e4608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e460c: 0xae03000c
    ctx->pc = 0x1e460cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4610: 0x7bbf0030
    ctx->pc = 0x1e4610u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4614: 0x7bb20020
    ctx->pc = 0x1e4614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4618: 0x7bb10010
    ctx->pc = 0x1e4618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e461c: 0x7bb00000
    ctx->pc = 0x1e461cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4620: 0x3e00008
    ctx->pc = 0x1E4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E45D4u: goto label_1e45d4;
            case 0x1E45E8u: goto label_1e45e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4628u;
}
