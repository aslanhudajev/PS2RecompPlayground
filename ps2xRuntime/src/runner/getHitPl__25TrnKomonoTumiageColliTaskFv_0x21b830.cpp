#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getHitPl__25TrnKomonoTumiageColliTaskFv
// Address: 0x21b830 - 0x21b8e8
void getHitPl__25TrnKomonoTumiageColliTaskFv_0x21b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getHitPl__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x21b830u;

    // 0x21b830: 0x27bdfff0
    ctx->pc = 0x21b830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b834: 0x7fbf0000
    ctx->pc = 0x21b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21b838: 0x8c86000c
    ctx->pc = 0x21b838u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b83c: 0x24020001
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b840: 0x30c70002
    ctx->pc = 0x21b840u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), 2));
    // 0x21b844: 0x7100a
    ctx->pc = 0x21b844u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21b848: 0x10400010
    ctx->pc = 0x21B848u;
    {
        const bool branch_taken_0x21b848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B84Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21b848) {
            ctx->pc = 0x21B88Cu;
            goto label_21b88c;
        }
    }
    ctx->pc = 0x21B850u;
    // 0x21b850: 0x30c30004
    ctx->pc = 0x21b850u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 4));
    // 0x21b854: 0x24020001
    ctx->pc = 0x21b854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b858: 0x3100a
    ctx->pc = 0x21b858u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21b85c: 0x1040000a
    ctx->pc = 0x21B85Cu;
    {
        const bool branch_taken_0x21b85c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b85c) {
            ctx->pc = 0x21B888u;
            goto label_21b888;
        }
    }
    ctx->pc = 0x21B864u;
    // 0x21b864: 0xc069fb8
    ctx->pc = 0x21B864u;
    SET_GPR_U32(ctx, 31, 0x21B86Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B86Cu; }
        else if (ctx->pc != 0x21B86Cu) { ctx->pc = 0x21B86Cu; }
    }
    if (ctx->pc != 0x21B86Cu) { return; }
    ctx->pc = 0x21B86Cu;
    // 0x21b86c: 0x441001a
    ctx->pc = 0x21B86Cu;
    {
        const bool branch_taken_0x21b86c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21B870u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x21b86c) {
            ctx->pc = 0x21B8D8u;
            goto label_21b8d8;
        }
    }
    ctx->pc = 0x21B874u;
    // 0x21b874: 0x10a00018
    ctx->pc = 0x21B874u;
    {
        const bool branch_taken_0x21b874 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b874) {
            ctx->pc = 0x21B8D8u;
            goto label_21b8d8;
        }
    }
    ctx->pc = 0x21B87Cu;
    // 0x21b87c: 0x24a5fffe
    ctx->pc = 0x21b87cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x21b880: 0x10000016
    ctx->pc = 0x21B880u;
    {
        const bool branch_taken_0x21b880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B884u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x21b880) {
            ctx->pc = 0x21B8DCu;
            goto label_21b8dc;
        }
    }
    ctx->pc = 0x21B888u;
label_21b888:
    // 0x21b888: 0x24020001
    ctx->pc = 0x21b888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21b88c:
    // 0x21b88c: 0x7100a
    ctx->pc = 0x21b88cu;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21b890: 0x10400008
    ctx->pc = 0x21B890u;
    {
        const bool branch_taken_0x21b890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B894u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x21b890) {
            ctx->pc = 0x21B8B4u;
            goto label_21b8b4;
        }
    }
    ctx->pc = 0x21B898u;
    // 0x21b898: 0x8c83000c
    ctx->pc = 0x21b898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b89c: 0x2402fffd
    ctx->pc = 0x21b89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21b8a0: 0x70002e28
    ctx->pc = 0x21b8a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b8a4: 0x621024
    ctx->pc = 0x21b8a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b8a8: 0x1000000b
    ctx->pc = 0x21B8A8u;
    {
        const bool branch_taken_0x21b8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B8ACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x21b8a8) {
            ctx->pc = 0x21B8D8u;
            goto label_21b8d8;
        }
    }
    ctx->pc = 0x21B8B0u;
    // 0x21b8b0: 0x30c30004
    ctx->pc = 0x21b8b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 4));
label_21b8b4:
    // 0x21b8b4: 0x24020001
    ctx->pc = 0x21b8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b8b8: 0x3100a
    ctx->pc = 0x21b8b8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21b8bc: 0x10400006
    ctx->pc = 0x21B8BCu;
    {
        const bool branch_taken_0x21b8bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b8bc) {
            ctx->pc = 0x21B8D8u;
            goto label_21b8d8;
        }
    }
    ctx->pc = 0x21B8C4u;
    // 0x21b8c4: 0x8c83000c
    ctx->pc = 0x21b8c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b8c8: 0x2402fffb
    ctx->pc = 0x21b8c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x21b8cc: 0x24050001
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b8d0: 0x621024
    ctx->pc = 0x21b8d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b8d4: 0xac82000c
    ctx->pc = 0x21b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_21b8d8:
    // 0x21b8d8: 0x7bbf0000
    ctx->pc = 0x21b8d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b8dc:
    // 0x21b8dc: 0x70a01628
    ctx->pc = 0x21b8dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21b8e0: 0x3e00008
    ctx->pc = 0x21B8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B8E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B888u: goto label_21b888;
            case 0x21B88Cu: goto label_21b88c;
            case 0x21B8B4u: goto label_21b8b4;
            case 0x21B8D8u: goto label_21b8d8;
            case 0x21B8DCu: goto label_21b8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B8E8u;
}
