#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_get_fstate
// Address: 0x1782d8 - 0x178380
void dvci_get_fstate_0x1782d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_get_fstate");


    ctx->pc = 0x1782d8u;

    // 0x1782d8: 0x27bdffd0
    ctx->pc = 0x1782d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1782dc: 0xffb10010
    ctx->pc = 0x1782dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1782e0: 0x80882d
    ctx->pc = 0x1782e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782e4: 0xffb00000
    ctx->pc = 0x1782e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1782e8: 0xa0802d
    ctx->pc = 0x1782e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782ec: 0x3c04002c
    ctx->pc = 0x1782ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1782f0: 0xffbf0020
    ctx->pc = 0x1782f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1782f4: 0x220282d
    ctx->pc = 0x1782f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782f8: 0xc0514bc
    ctx->pc = 0x1782F8u;
    SET_GPR_U32(ctx, 31, 0x178300u);
    ctx->pc = 0x1782FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948080));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178300u; }
        else if (ctx->pc != 0x178300u) { ctx->pc = 0x178300u; }
    }
    if (ctx->pc != 0x178300u) { return; }
    ctx->pc = 0x178300u;
    // 0x178300: 0x1440000d
    ctx->pc = 0x178300u;
    {
        const bool branch_taken_0x178300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x178300) {
            ctx->pc = 0x178338u;
            goto label_178338;
        }
    }
    ctx->pc = 0x178308u;
    // 0x178308: 0x3c027fff
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x17830c: 0xae000000
    ctx->pc = 0x17830cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x178310: 0x3442ffff
    ctx->pc = 0x178310u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x178314: 0x3c04002c
    ctx->pc = 0x178314u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178318: 0xae020004
    ctx->pc = 0x178318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17831c: 0x2484b4f8
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948088));
    // 0x178320: 0xdfbf0020
    ctx->pc = 0x178320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178324: 0x2405002e
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    // 0x178328: 0xdfb10010
    ctx->pc = 0x178328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17832c: 0xdfb00000
    ctx->pc = 0x17832cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178330: 0x805114a
    ctx->pc = 0x178330u;
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x144528u;
    printf_0x144528(rdram, ctx, runtime); return;
    ctx->pc = 0x178338u;
label_178338:
    // 0x178338: 0xae000000
    ctx->pc = 0x178338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17833c: 0x8c469f08
    ctx->pc = 0x17833cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294942472)));
    // 0x178340: 0x24429f08
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942472));
    // 0x178344: 0x10c00009
    ctx->pc = 0x178344u;
    {
        const bool branch_taken_0x178344 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x178348u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x178344) {
            ctx->pc = 0x17836Cu;
            goto label_17836c;
        }
    }
    ctx->pc = 0x17834Cu;
    // 0x17834c: 0x200202d
    ctx->pc = 0x17834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178350: 0x220282d
    ctx->pc = 0x178350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178354: 0x8c470004
    ctx->pc = 0x178354u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x178358: 0xdfbf0020
    ctx->pc = 0x178358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17835c: 0xdfb10010
    ctx->pc = 0x17835cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178360: 0xdfb00000
    ctx->pc = 0x178360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178364: 0x805e07c
    ctx->pc = 0x178364u;
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1781F0u;
    get_fp_from_fname_0x1781f0(rdram, ctx, runtime); return;
    ctx->pc = 0x17836Cu;
label_17836c:
    // 0x17836c: 0xdfbf0020
    ctx->pc = 0x17836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178370: 0xdfb10010
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178374: 0xdfb00000
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178378: 0x3e00008
    ctx->pc = 0x178378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17837Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178338u: goto label_178338;
            case 0x17836Cu: goto label_17836c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178380u;
}
