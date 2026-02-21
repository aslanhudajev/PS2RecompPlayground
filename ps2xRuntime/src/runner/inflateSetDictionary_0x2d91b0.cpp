#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateSetDictionary
// Address: 0x2d91b0 - 0x2d9280
void inflateSetDictionary_0x2d91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d91b0u;

    // 0x2d91b0: 0x27bdffb0
    ctx->pc = 0x2d91b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d91b4: 0xffbf0040
    ctx->pc = 0x2d91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d91b8: 0xffb30030
    ctx->pc = 0x2d91b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d91bc: 0xffb20020
    ctx->pc = 0x2d91bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d91c0: 0xffb10010
    ctx->pc = 0x2d91c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d91c4: 0xffb00000
    ctx->pc = 0x2d91c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d91c8: 0x80882d
    ctx->pc = 0x2d91c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91cc: 0xa0902d
    ctx->pc = 0x2d91ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91d0: 0xc0802d
    ctx->pc = 0x2d91d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91d4: 0x12200007
    ctx->pc = 0x2D91D4u;
    {
        const bool branch_taken_0x2d91d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D91D8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d91d4) {
            ctx->pc = 0x2D91F4u;
            goto label_2d91f4;
        }
    }
    ctx->pc = 0x2D91DCu;
    // 0x2d91dc: 0x8e23001c
    ctx->pc = 0x2d91dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d91e0: 0x10600004
    ctx->pc = 0x2D91E0u;
    {
        const bool branch_taken_0x2d91e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D91E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2d91e0) {
            ctx->pc = 0x2D91F4u;
            goto label_2d91f4;
        }
    }
    ctx->pc = 0x2D91E8u;
    // 0x2d91e8: 0x8c630000
    ctx->pc = 0x2d91e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d91ec: 0x10620003
    ctx->pc = 0x2D91ECu;
    {
        const bool branch_taken_0x2d91ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D91F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d91ec) {
            ctx->pc = 0x2D91FCu;
            goto label_2d91fc;
        }
    }
    ctx->pc = 0x2D91F4u;
label_2d91f4:
    // 0x2d91f4: 0x1000001b
    ctx->pc = 0x2D91F4u;
    {
        const bool branch_taken_0x2d91f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D91F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d91f4) {
            ctx->pc = 0x2D9264u;
            goto label_2d9264;
        }
    }
    ctx->pc = 0x2D91FCu;
label_2d91fc:
    // 0x2d91fc: 0x240282d
    ctx->pc = 0x2d91fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9200: 0xc0b64f2
    ctx->pc = 0x2D9200u;
    SET_GPR_U32(ctx, 31, 0x2D9208u);
    ctx->pc = 0x2D9204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D93C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adler32_0x2d93c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9208u; }
    }
    if (ctx->pc != 0x2D9208u) { return; }
    ctx->pc = 0x2D9208u;
    // 0x2d9208: 0x8e230030
    ctx->pc = 0x2d9208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d920c: 0x14430015
    ctx->pc = 0x2D920Cu;
    {
        const bool branch_taken_0x2d920c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2D9210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d920c) {
            ctx->pc = 0x2D9264u;
            goto label_2d9264;
        }
    }
    ctx->pc = 0x2D9214u;
    // 0x2d9214: 0x24040001
    ctx->pc = 0x2d9214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9218: 0xae240030
    ctx->pc = 0x2d9218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x2d921c: 0x8e22001c
    ctx->pc = 0x2d921cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d9220: 0x8c430010
    ctx->pc = 0x2d9220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d9224: 0x701006
    ctx->pc = 0x2d9224u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d9228: 0x50400006
    ctx->pc = 0x2D9228u;
    {
        const bool branch_taken_0x2d9228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d9228) {
            ctx->pc = 0x2D922Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x2D9244u;
            goto label_2d9244;
        }
    }
    ctx->pc = 0x2D9230u;
    // 0x2d9230: 0x648004
    ctx->pc = 0x2d9230u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d9234: 0x2610ffff
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d9238: 0x2701023
    ctx->pc = 0x2d9238u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2d923c: 0x2429021
    ctx->pc = 0x2d923cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d9240: 0x8e22001c
    ctx->pc = 0x2d9240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2d9244:
    // 0x2d9244: 0x8c440014
    ctx->pc = 0x2d9244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d9248: 0x240282d
    ctx->pc = 0x2d9248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d924c: 0xc0b693e
    ctx->pc = 0x2D924Cu;
    SET_GPR_U32(ctx, 31, 0x2D9254u);
    ctx->pc = 0x2D9250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DA4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_set_dictionary_0x2da4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9254u; }
    }
    if (ctx->pc != 0x2D9254u) { return; }
    ctx->pc = 0x2D9254u;
    // 0x2d9254: 0x8e23001c
    ctx->pc = 0x2d9254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d9258: 0x24020007
    ctx->pc = 0x2d9258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d925c: 0xac620000
    ctx->pc = 0x2d925cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d9260: 0x102d
    ctx->pc = 0x2d9260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9264:
    // 0x2d9264: 0xdfbf0040
    ctx->pc = 0x2d9264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9268: 0xdfb30030
    ctx->pc = 0x2d9268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d926c: 0xdfb20020
    ctx->pc = 0x2d926cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9270: 0xdfb10010
    ctx->pc = 0x2d9270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9274: 0xdfb00000
    ctx->pc = 0x2d9274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9278: 0x3e00008
    ctx->pc = 0x2D9278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D927Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D91F4u: goto label_2d91f4;
            case 0x2D91FCu: goto label_2d91fc;
            case 0x2D9244u: goto label_2d9244;
            case 0x2D9264u: goto label_2d9264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D9280u;
}
