#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_PutChunk
// Address: 0x17c1d0 - 0x17c268
void SJMEM_PutChunk_0x17c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_PutChunk");


    ctx->pc = 0x17c1d0u;

label_17c1d0:
    // 0x17c1d0: 0x27bdffc0
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17c1d4:
    // 0x17c1d4: 0xffb20020
    ctx->pc = 0x17c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c1d8:
    // 0x17c1d8: 0xffb10010
    ctx->pc = 0x17c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c1dc:
    // 0x17c1dc: 0x80902d
    ctx->pc = 0x17c1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c1e0:
    // 0x17c1e0: 0xffb00000
    ctx->pc = 0x17c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c1e4:
    // 0x17c1e4: 0xffbf0030
    ctx->pc = 0x17c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17c1e8:
    // 0x17c1e8: 0xc0802d
    ctx->pc = 0x17c1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c1ec:
    // 0x17c1ec: 0x8e020004
    ctx->pc = 0x17c1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c1f0:
    // 0x17c1f0: 0x18400017
label_17c1f4:
    if (ctx->pc == 0x17C1F4u) {
        ctx->pc = 0x17C1F4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C1F8u;
        goto label_17c1f8;
    }
    ctx->pc = 0x17C1F0u;
    {
        const bool branch_taken_0x17c1f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C1F4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c1f0) {
            ctx->pc = 0x17C250u;
            goto label_17c250;
        }
    }
    ctx->pc = 0x17C1F8u;
label_17c1f8:
    // 0x17c1f8: 0x8e020000
    ctx->pc = 0x17c1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c1fc:
    // 0x17c1fc: 0x10400015
label_17c200:
    if (ctx->pc == 0x17C200u) {
        ctx->pc = 0x17C200u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C204u;
        goto label_17c204;
    }
    ctx->pc = 0x17C1FCu;
    {
        const bool branch_taken_0x17c1fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C200u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c1fc) {
            ctx->pc = 0x17C254u;
            goto label_17c254;
        }
    }
    ctx->pc = 0x17C204u;
label_17c204:
    // 0x17c204: 0xc05efbc
label_17c208:
    if (ctx->pc == 0x17C208u) {
        ctx->pc = 0x17C20Cu;
        goto label_17c20c;
    }
    ctx->pc = 0x17C204u;
    SET_GPR_U32(ctx, 31, 0x17C20Cu);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C20Cu; }
        else if (ctx->pc != 0x17C20Cu) { ctx->pc = 0x17C20Cu; }
    }
    if (ctx->pc != 0x17C20Cu) { return; }
    ctx->pc = 0x17C20Cu;
label_17c20c:
    // 0x17c20c: 0x1220000a
label_17c210:
    if (ctx->pc == 0x17C210u) {
        ctx->pc = 0x17C210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C214u;
        goto label_17c214;
    }
    ctx->pc = 0x17C20Cu;
    {
        const bool branch_taken_0x17c20c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c20c) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C214u;
label_17c214:
    // 0x17c214: 0x12220009
label_17c218:
    if (ctx->pc == 0x17C218u) {
        ctx->pc = 0x17C218u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C21Cu;
        goto label_17c21c;
    }
    ctx->pc = 0x17C214u;
    {
        const bool branch_taken_0x17c214 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x17C218u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c214) {
            ctx->pc = 0x17C23Cu;
            goto label_17c23c;
        }
    }
    ctx->pc = 0x17C21Cu;
label_17c21c:
    // 0x17c21c: 0x8e42001c
    ctx->pc = 0x17c21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_17c220:
    // 0x17c220: 0xae000000
    ctx->pc = 0x17c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17c224:
    // 0x17c224: 0x10400005
label_17c228:
    if (ctx->pc == 0x17C228u) {
        ctx->pc = 0x17C228u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C22Cu;
        goto label_17c22c;
    }
    ctx->pc = 0x17C224u;
    {
        const bool branch_taken_0x17c224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C228u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c224) {
            ctx->pc = 0x17C23Cu;
            goto label_17c23c;
        }
    }
    ctx->pc = 0x17C22Cu;
label_17c22c:
    // 0x17c22c: 0x8e440020
    ctx->pc = 0x17c22cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_17c230:
    // 0x17c230: 0x40f809
label_17c234:
    if (ctx->pc == 0x17C234u) {
        ctx->pc = 0x17C234u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C238u;
        goto label_17c238;
    }
    ctx->pc = 0x17C230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C238u);
        ctx->pc = 0x17C234u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C1D0u: goto label_17c1d0;
            case 0x17C1D4u: goto label_17c1d4;
            case 0x17C1D8u: goto label_17c1d8;
            case 0x17C1DCu: goto label_17c1dc;
            case 0x17C1E0u: goto label_17c1e0;
            case 0x17C1E4u: goto label_17c1e4;
            case 0x17C1E8u: goto label_17c1e8;
            case 0x17C1ECu: goto label_17c1ec;
            case 0x17C1F0u: goto label_17c1f0;
            case 0x17C1F4u: goto label_17c1f4;
            case 0x17C1F8u: goto label_17c1f8;
            case 0x17C1FCu: goto label_17c1fc;
            case 0x17C200u: goto label_17c200;
            case 0x17C204u: goto label_17c204;
            case 0x17C208u: goto label_17c208;
            case 0x17C20Cu: goto label_17c20c;
            case 0x17C210u: goto label_17c210;
            case 0x17C214u: goto label_17c214;
            case 0x17C218u: goto label_17c218;
            case 0x17C21Cu: goto label_17c21c;
            case 0x17C220u: goto label_17c220;
            case 0x17C224u: goto label_17c224;
            case 0x17C228u: goto label_17c228;
            case 0x17C22Cu: goto label_17c22c;
            case 0x17C230u: goto label_17c230;
            case 0x17C234u: goto label_17c234;
            case 0x17C238u: goto label_17c238;
            case 0x17C23Cu: goto label_17c23c;
            case 0x17C240u: goto label_17c240;
            case 0x17C244u: goto label_17c244;
            case 0x17C248u: goto label_17c248;
            case 0x17C24Cu: goto label_17c24c;
            case 0x17C250u: goto label_17c250;
            case 0x17C254u: goto label_17c254;
            case 0x17C258u: goto label_17c258;
            case 0x17C25Cu: goto label_17c25c;
            case 0x17C260u: goto label_17c260;
            case 0x17C264u: goto label_17c264;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C238u; }
            if (ctx->pc != 0x17C238u) { return; }
        }
    }
    ctx->pc = 0x17C238u;
label_17c238:
    // 0x17c238: 0xdfbf0030
    ctx->pc = 0x17c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c23c:
    // 0x17c23c: 0xdfb20020
    ctx->pc = 0x17c23cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c240:
    // 0x17c240: 0xdfb10010
    ctx->pc = 0x17c240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c244:
    // 0x17c244: 0xdfb00000
    ctx->pc = 0x17c244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c248:
    // 0x17c248: 0x805efc2
label_17c24c:
    if (ctx->pc == 0x17C24Cu) {
        ctx->pc = 0x17C24Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C250u;
        goto label_17c250;
    }
    ctx->pc = 0x17C248u;
    ctx->pc = 0x17C24Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17C250u;
label_17c250:
    // 0x17c250: 0xdfbf0030
    ctx->pc = 0x17c250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c254:
    // 0x17c254: 0xdfb20020
    ctx->pc = 0x17c254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c258:
    // 0x17c258: 0xdfb10010
    ctx->pc = 0x17c258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c25c:
    // 0x17c25c: 0xdfb00000
    ctx->pc = 0x17c25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c260:
    // 0x17c260: 0x3e00008
label_17c264:
    if (ctx->pc == 0x17C264u) {
        ctx->pc = 0x17C264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C268u;
        goto label_fallthrough_0x17c260;
    }
    ctx->pc = 0x17C260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C1D0u: goto label_17c1d0;
            case 0x17C1D4u: goto label_17c1d4;
            case 0x17C1D8u: goto label_17c1d8;
            case 0x17C1DCu: goto label_17c1dc;
            case 0x17C1E0u: goto label_17c1e0;
            case 0x17C1E4u: goto label_17c1e4;
            case 0x17C1E8u: goto label_17c1e8;
            case 0x17C1ECu: goto label_17c1ec;
            case 0x17C1F0u: goto label_17c1f0;
            case 0x17C1F4u: goto label_17c1f4;
            case 0x17C1F8u: goto label_17c1f8;
            case 0x17C1FCu: goto label_17c1fc;
            case 0x17C200u: goto label_17c200;
            case 0x17C204u: goto label_17c204;
            case 0x17C208u: goto label_17c208;
            case 0x17C20Cu: goto label_17c20c;
            case 0x17C210u: goto label_17c210;
            case 0x17C214u: goto label_17c214;
            case 0x17C218u: goto label_17c218;
            case 0x17C21Cu: goto label_17c21c;
            case 0x17C220u: goto label_17c220;
            case 0x17C224u: goto label_17c224;
            case 0x17C228u: goto label_17c228;
            case 0x17C22Cu: goto label_17c22c;
            case 0x17C230u: goto label_17c230;
            case 0x17C234u: goto label_17c234;
            case 0x17C238u: goto label_17c238;
            case 0x17C23Cu: goto label_17c23c;
            case 0x17C240u: goto label_17c240;
            case 0x17C244u: goto label_17c244;
            case 0x17C248u: goto label_17c248;
            case 0x17C24Cu: goto label_17c24c;
            case 0x17C250u: goto label_17c250;
            case 0x17C254u: goto label_17c254;
            case 0x17C258u: goto label_17c258;
            case 0x17C25Cu: goto label_17c25c;
            case 0x17C260u: goto label_17c260;
            case 0x17C264u: goto label_17c264;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c260:
    ctx->pc = 0x17C268u;
}
