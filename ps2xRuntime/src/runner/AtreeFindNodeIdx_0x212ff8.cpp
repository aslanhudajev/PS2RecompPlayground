#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeFindNodeIdx
// Address: 0x212ff8 - 0x2130a8
void AtreeFindNodeIdx_0x212ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212ff8u;

    // 0x212ff8: 0x27bdff90
    ctx->pc = 0x212ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212ffc: 0xffbf0060
    ctx->pc = 0x212ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x213000: 0xffb50050
    ctx->pc = 0x213000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x213004: 0xffb40040
    ctx->pc = 0x213004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x213008: 0xffb30030
    ctx->pc = 0x213008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21300c: 0xffb20020
    ctx->pc = 0x21300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213010: 0xffb10010
    ctx->pc = 0x213010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x213014: 0xffb00000
    ctx->pc = 0x213014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213018: 0x80a02d
    ctx->pc = 0x213018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21301c: 0xa0902d
    ctx->pc = 0x21301cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213020: 0xc0882d
    ctx->pc = 0x213020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213024: 0x12200016
    ctx->pc = 0x213024u;
    {
        const bool branch_taken_0x213024 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x213028u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213024) {
            ctx->pc = 0x213080u;
            goto label_213080;
        }
    }
    ctx->pc = 0x21302Cu;
    // 0x21302c: 0x82220000
    ctx->pc = 0x21302cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213030: 0x10400014
    ctx->pc = 0x213030u;
    {
        const bool branch_taken_0x213030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x213030) {
            ctx->pc = 0x213084u;
            goto label_213084;
        }
    }
    ctx->pc = 0x213038u;
    // 0x213038: 0x1a40000d
    ctx->pc = 0x213038u;
    {
        const bool branch_taken_0x213038 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x21303Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213038) {
            ctx->pc = 0x213070u;
            goto label_213070;
        }
    }
    ctx->pc = 0x213040u;
    // 0x213040: 0x2415003c
    ctx->pc = 0x213040u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 60));
    // 0x213044: 0x2151018
    ctx->pc = 0x213044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_213048:
    // 0x213048: 0x542021
    ctx->pc = 0x213048u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21304c: 0x220282d
    ctx->pc = 0x21304cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213050: 0xc0bf3c0
    ctx->pc = 0x213050u;
    SET_GPR_U32(ctx, 31, 0x213058u);
    ctx->pc = 0x213054u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213058u; }
    }
    if (ctx->pc != 0x213058u) { return; }
    ctx->pc = 0x213058u;
    // 0x213058: 0x1040000a
    ctx->pc = 0x213058u;
    {
        const bool branch_taken_0x213058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21305Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213058) {
            ctx->pc = 0x213084u;
            goto label_213084;
        }
    }
    ctx->pc = 0x213060u;
    // 0x213060: 0x26100001
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x213064: 0x212102a
    ctx->pc = 0x213064u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x213068: 0x1440fff7
    ctx->pc = 0x213068u;
    {
        const bool branch_taken_0x213068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21306Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x213068) {
            ctx->pc = 0x213048u;
            goto label_213048;
        }
    }
    ctx->pc = 0x213070u;
label_213070:
    // 0x213070: 0x3c04003a
    ctx->pc = 0x213070u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x213074: 0x24845a40
    ctx->pc = 0x213074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23104));
    // 0x213078: 0xc0b492e
    ctx->pc = 0x213078u;
    SET_GPR_U32(ctx, 31, 0x213080u);
    ctx->pc = 0x21307Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213080u; }
    }
    if (ctx->pc != 0x213080u) { return; }
    ctx->pc = 0x213080u;
label_213080:
    // 0x213080: 0x2402ffff
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_213084:
    // 0x213084: 0xdfbf0060
    ctx->pc = 0x213084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x213088: 0xdfb50050
    ctx->pc = 0x213088u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21308c: 0xdfb40040
    ctx->pc = 0x21308cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213090: 0xdfb30030
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213094: 0xdfb20020
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213098: 0xdfb10010
    ctx->pc = 0x213098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21309c: 0xdfb00000
    ctx->pc = 0x21309cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2130a0: 0x3e00008
    ctx->pc = 0x2130A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2130A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213048u: goto label_213048;
            case 0x213070u: goto label_213070;
            case 0x213080u: goto label_213080;
            case 0x213084u: goto label_213084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2130A8u;
}
