#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init3__12FileMgrClassFv
// Address: 0x1e9590 - 0x1e96ac
void init3__12FileMgrClassFv_0x1e9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init3__12FileMgrClassFv");


    ctx->pc = 0x1e9590u;

    // 0x1e9590: 0x27bdffe0
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9594: 0x7fbf0010
    ctx->pc = 0x1e9594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e9598: 0x7fb00000
    ctx->pc = 0x1e9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e959c: 0x1000003c
    ctx->pc = 0x1E959Cu;
    {
        const bool branch_taken_0x1e959c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E95A0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e959c) {
            ctx->pc = 0x1E9690u;
            goto label_1e9690;
        }
    }
    ctx->pc = 0x1E95A4u;
    // 0x1e95a4: 0x24030018
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
label_1e95a8:
    // 0x1e95a8: 0x52030038
    ctx->pc = 0x1E95A8u;
    {
        const bool branch_taken_0x1e95a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95a8) {
            ctx->pc = 0x1E95ACu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1E968Cu;
            goto label_1e968c;
        }
    }
    ctx->pc = 0x1E95B0u;
    // 0x1e95b0: 0x24030013
    ctx->pc = 0x1e95b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1e95b4: 0x12030034
    ctx->pc = 0x1E95B4u;
    {
        const bool branch_taken_0x1e95b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95b4) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95BCu;
    // 0x1e95bc: 0x24030012
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e95c0: 0x12030031
    ctx->pc = 0x1E95C0u;
    {
        const bool branch_taken_0x1e95c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95c0) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95C8u;
    // 0x1e95c8: 0x24030011
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e95cc: 0x1203002e
    ctx->pc = 0x1E95CCu;
    {
        const bool branch_taken_0x1e95cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95cc) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95D4u;
    // 0x1e95d4: 0x24030010
    ctx->pc = 0x1e95d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e95d8: 0x1203002b
    ctx->pc = 0x1E95D8u;
    {
        const bool branch_taken_0x1e95d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95d8) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95E0u;
    // 0x1e95e0: 0x2403000d
    ctx->pc = 0x1e95e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e95e4: 0x12030028
    ctx->pc = 0x1E95E4u;
    {
        const bool branch_taken_0x1e95e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95e4) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95ECu;
    // 0x1e95ec: 0x24030008
    ctx->pc = 0x1e95ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e95f0: 0x12030025
    ctx->pc = 0x1E95F0u;
    {
        const bool branch_taken_0x1e95f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95f0) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E95F8u;
    // 0x1e95f8: 0x24030005
    ctx->pc = 0x1e95f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e95fc: 0x12030022
    ctx->pc = 0x1E95FCu;
    {
        const bool branch_taken_0x1e95fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e95fc) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9604u;
    // 0x1e9604: 0x24030004
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9608: 0x1203001f
    ctx->pc = 0x1E9608u;
    {
        const bool branch_taken_0x1e9608 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e9608) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9610u;
    // 0x1e9610: 0x24030003
    ctx->pc = 0x1e9610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9614: 0x1203001c
    ctx->pc = 0x1E9614u;
    {
        const bool branch_taken_0x1e9614 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e9614) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E961Cu;
    // 0x1e961c: 0x24030002
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9620: 0x12030019
    ctx->pc = 0x1E9620u;
    {
        const bool branch_taken_0x1e9620 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e9620) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9628u;
    // 0x1e9628: 0x24030001
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e962c: 0x12030016
    ctx->pc = 0x1E962Cu;
    {
        const bool branch_taken_0x1e962c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e962c) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9634u;
    // 0x1e9634: 0x12000014
    ctx->pc = 0x1E9634u;
    {
        const bool branch_taken_0x1e9634 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9634) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E963Cu;
    // 0x1e963c: 0x3c020027
    ctx->pc = 0x1e963cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e9640: 0x101900
    ctx->pc = 0x1e9640u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9644: 0x2442bcc0
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x1e9648: 0x433021
    ctx->pc = 0x1e9648u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e964c: 0x3c020050
    ctx->pc = 0x1e964cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e9650: 0x24440b40
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1e9654: 0x3c020027
    ctx->pc = 0x1e9654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e9658: 0xc07a5ac
    ctx->pc = 0x1E9658u;
    SET_GPR_U32(ctx, 31, 0x1E9660u);
    ctx->pc = 0x1E965Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950480));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9660u; }
        else if (ctx->pc != 0x1E9660u) { ctx->pc = 0x1E9660u; }
    }
    if (ctx->pc != 0x1E9660u) { return; }
    ctx->pc = 0x1E9660u;
    // 0x1e9660: 0x70402628
    ctx->pc = 0x1e9660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9664: 0xc05ad72
    ctx->pc = 0x1E9664u;
    SET_GPR_U32(ctx, 31, 0x1E966Cu);
    ctx->pc = 0x1E9668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E966Cu; }
        else if (ctx->pc != 0x1E966Cu) { ctx->pc = 0x1E966Cu; }
    }
    if (ctx->pc != 0x1E966Cu) { return; }
    ctx->pc = 0x1E966Cu;
    // 0x1e966c: 0x3c030050
    ctx->pc = 0x1e966cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e9670: 0x102080
    ctx->pc = 0x1e9670u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9674: 0x24630c60
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3168));
    // 0x1e9678: 0x641821
    ctx->pc = 0x1e9678u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e967c: 0x14400002
    ctx->pc = 0x1E967Cu;
    {
        const bool branch_taken_0x1e967c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E9680u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1e967c) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9684u;
    // 0x1e9684: 0xd
    ctx->pc = 0x1e9684u;
    runtime->handleBreak(rdram, ctx);
label_1e9688:
    // 0x1e9688: 0x26100001
    ctx->pc = 0x1e9688u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e968c:
    // 0x1e968c: 0x0
    ctx->pc = 0x1e968cu;
    // NOP
label_1e9690:
    // 0x1e9690: 0x2a03000c
    ctx->pc = 0x1e9690u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 12));
    // 0x1e9694: 0x1460ffc4
    ctx->pc = 0x1E9694u;
    {
        const bool branch_taken_0x1e9694 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E9698u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x1e9694) {
            ctx->pc = 0x1E95A8u;
            goto label_1e95a8;
        }
    }
    ctx->pc = 0x1E969Cu;
    // 0x1e969c: 0x7bbf0010
    ctx->pc = 0x1e969cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e96a0: 0x7bb00000
    ctx->pc = 0x1e96a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e96a4: 0x3e00008
    ctx->pc = 0x1E96A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E96A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E9688u: goto label_1e9688;
            case 0x1E968Cu: goto label_1e968c;
            case 0x1E9690u: goto label_1e9690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E96ACu;
}
