#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindPart
// Address: 0x2202d0 - 0x220368
void AudioFindPart_0x2202d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2202d0u;

    // 0x2202d0: 0x27bdffb0
    ctx->pc = 0x2202d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2202d4: 0xffbf0040
    ctx->pc = 0x2202d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2202d8: 0xffb30030
    ctx->pc = 0x2202d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2202dc: 0xffb20020
    ctx->pc = 0x2202dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2202e0: 0xffb10010
    ctx->pc = 0x2202e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2202e4: 0xffb00000
    ctx->pc = 0x2202e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2202e8: 0x80882d
    ctx->pc = 0x2202e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202ec: 0x802d
    ctx->pc = 0x2202ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202f0: 0x3c130032
    ctx->pc = 0x2202f0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x2202f4: 0x24120124
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 292));
label_2202f8:
    // 0x2202f8: 0x8e63fe28
    ctx->pc = 0x2202f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294966824)));
    // 0x2202fc: 0x8c620010
    ctx->pc = 0x2202fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220300: 0x202102a
    ctx->pc = 0x220300u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x220304: 0x10400008
    ctx->pc = 0x220304u;
    {
        const bool branch_taken_0x220304 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220308u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x220304) {
            ctx->pc = 0x220328u;
            goto label_220328;
        }
    }
    ctx->pc = 0x22030Cu;
    // 0x22030c: 0x24840014
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
    // 0x220310: 0x832021
    ctx->pc = 0x220310u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x220314: 0x220282d
    ctx->pc = 0x220314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220318: 0xc0bf3c0
    ctx->pc = 0x220318u;
    SET_GPR_U32(ctx, 31, 0x220320u);
    ctx->pc = 0x22031Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220320u; }
    }
    if (ctx->pc != 0x220320u) { return; }
    ctx->pc = 0x220320u;
    // 0x220320: 0x5440fff5
    ctx->pc = 0x220320u;
    {
        const bool branch_taken_0x220320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x220320) {
            ctx->pc = 0x220324u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2202F8u;
            goto label_2202f8;
        }
    }
    ctx->pc = 0x220328u;
label_220328:
    // 0x220328: 0x3c020032
    ctx->pc = 0x220328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22032c: 0x8c42fe28
    ctx->pc = 0x22032cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966824)));
    // 0x220330: 0x8c420010
    ctx->pc = 0x220330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220334: 0x56020005
    ctx->pc = 0x220334u;
    {
        const bool branch_taken_0x220334 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x220334) {
            ctx->pc = 0x220338u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22034Cu;
            goto label_22034c;
        }
    }
    ctx->pc = 0x22033Cu;
    // 0x22033c: 0x3c030032
    ctx->pc = 0x22033cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220340: 0x24020001
    ctx->pc = 0x220340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x220344: 0xac62fd58
    ctx->pc = 0x220344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966616), GPR_U32(ctx, 2));
    // 0x220348: 0x2402ffff
    ctx->pc = 0x220348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_22034c:
    // 0x22034c: 0xdfbf0040
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220350: 0xdfb30030
    ctx->pc = 0x220350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220354: 0xdfb20020
    ctx->pc = 0x220354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220358: 0xdfb10010
    ctx->pc = 0x220358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22035c: 0xdfb00000
    ctx->pc = 0x22035cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220360: 0x3e00008
    ctx->pc = 0x220360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2202F8u: goto label_2202f8;
            case 0x220328u: goto label_220328;
            case 0x22034Cu: goto label_22034c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220368u;
}
