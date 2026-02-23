#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiReqRd
// Address: 0x178fa8 - 0x1790ac
void htCiReqRd_0x178fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiReqRd");


    ctx->pc = 0x178fa8u;

    // 0x178fa8: 0x27bdffa0
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178fac: 0xffb20020
    ctx->pc = 0x178facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x178fb0: 0xffb10010
    ctx->pc = 0x178fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x178fb4: 0xc0902d
    ctx->pc = 0x178fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fb8: 0xffb00000
    ctx->pc = 0x178fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178fbc: 0xa0882d
    ctx->pc = 0x178fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fc0: 0xffbf0050
    ctx->pc = 0x178fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x178fc4: 0x80802d
    ctx->pc = 0x178fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fc8: 0xffb40040
    ctx->pc = 0x178fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x178fcc: 0x16000005
    ctx->pc = 0x178FCCu;
    {
        const bool branch_taken_0x178fcc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x178FD0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        if (branch_taken_0x178fcc) {
            ctx->pc = 0x178FE4u;
            goto label_178fe4;
        }
    }
    ctx->pc = 0x178FD4u;
    // 0x178fd4: 0x3c05002c
    ctx->pc = 0x178fd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178fd8: 0x202d
    ctx->pc = 0x178fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fdc: 0x1000000a
    ctx->pc = 0x178FDCu;
    {
        const bool branch_taken_0x178fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178FE0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
        if (branch_taken_0x178fdc) {
            ctx->pc = 0x179008u;
            goto label_179008;
        }
    }
    ctx->pc = 0x178FE4u;
label_178fe4:
    // 0x178fe4: 0x6210004
    ctx->pc = 0x178FE4u;
    {
        const bool branch_taken_0x178fe4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x178FE8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178fe4) {
            ctx->pc = 0x178FF8u;
            goto label_178ff8;
        }
    }
    ctx->pc = 0x178FECu;
    // 0x178fec: 0x200202d
    ctx->pc = 0x178fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ff0: 0x10000005
    ctx->pc = 0x178FF0u;
    {
        const bool branch_taken_0x178ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178FF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948936));
        if (branch_taken_0x178ff0) {
            ctx->pc = 0x179008u;
            goto label_179008;
        }
    }
    ctx->pc = 0x178FF8u;
label_178ff8:
    // 0x178ff8: 0x16400007
    ctx->pc = 0x178FF8u;
    {
        const bool branch_taken_0x178ff8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x178FFCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178ff8) {
            ctx->pc = 0x179018u;
            goto label_179018;
        }
    }
    ctx->pc = 0x179000u;
    // 0x179000: 0x200202d
    ctx->pc = 0x179000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179004: 0x24a5b868
    ctx->pc = 0x179004u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948968));
label_179008:
    // 0x179008: 0xc05e1ca
    ctx->pc = 0x179008u;
    SET_GPR_U32(ctx, 31, 0x179010u);
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179010u; }
        else if (ctx->pc != 0x179010u) { ctx->pc = 0x179010u; }
    }
    if (ctx->pc != 0x179010u) { return; }
    ctx->pc = 0x179010u;
    // 0x179010: 0x1000001e
    ctx->pc = 0x179010u;
    {
        const bool branch_taken_0x179010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179014u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179010) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179018u;
label_179018:
    // 0x179018: 0xc05e1d6
    ctx->pc = 0x179018u;
    SET_GPR_U32(ctx, 31, 0x179020u);
    ctx->pc = 0x17901Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x178758u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_exec_hn_0x178758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179020u; }
        else if (ctx->pc != 0x179020u) { ctx->pc = 0x179020u; }
    }
    if (ctx->pc != 0x179020u) { return; }
    ctx->pc = 0x179020u;
    // 0x179020: 0x1054001a
    ctx->pc = 0x179020u;
    {
        const bool branch_taken_0x179020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x179024u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179020) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179028u;
    // 0x179028: 0xc05d7f0
    ctx->pc = 0x179028u;
    SET_GPR_U32(ctx, 31, 0x179030u);
    ctx->pc = 0x17902Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x175FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_GetStat_0x175fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179030u; }
        else if (ctx->pc != 0x179030u) { ctx->pc = 0x179030u; }
    }
    if (ctx->pc != 0x179030u) { return; }
    ctx->pc = 0x179030u;
    // 0x179030: 0x10530016
    ctx->pc = 0x179030u;
    {
        const bool branch_taken_0x179030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x179034u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179030) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179038u;
    // 0x179038: 0xc05e1fe
    ctx->pc = 0x179038u;
    SET_GPR_U32(ctx, 31, 0x179040u);
    ctx->pc = 0x1787F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_all_excute_0x1787f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179040u; }
        else if (ctx->pc != 0x179040u) { ctx->pc = 0x179040u; }
    }
    if (ctx->pc != 0x179040u) { return; }
    ctx->pc = 0x179040u;
    // 0x179040: 0x10400012
    ctx->pc = 0x179040u;
    {
        const bool branch_taken_0x179040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179044u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179040) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179048u;
    // 0x179048: 0x92020002
    ctx->pc = 0x179048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17904c: 0x2c420002
    ctx->pc = 0x17904cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x179050: 0x1040000e
    ctx->pc = 0x179050u;
    {
        const bool branch_taken_0x179050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179054u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179050) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179058u;
    // 0x179058: 0x56200003
    ctx->pc = 0x179058u;
    {
        const bool branch_taken_0x179058 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x179058) {
            ctx->pc = 0x17905Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x179068u;
            goto label_179068;
        }
    }
    ctx->pc = 0x179060u;
    // 0x179060: 0x1000000a
    ctx->pc = 0x179060u;
    {
        const bool branch_taken_0x179060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179064u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x179060) {
            ctx->pc = 0x17908Cu;
            goto label_17908c;
        }
    }
    ctx->pc = 0x179068u;
label_179068:
    // 0x179068: 0x8e020014
    ctx->pc = 0x179068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17906c: 0xa2130002
    ctx->pc = 0x17906cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x179070: 0x431023
    ctx->pc = 0x179070u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179074: 0xae12001c
    ctx->pc = 0x179074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x179078: 0x222182a
    ctx->pc = 0x179078u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x17907c: 0xa2000003
    ctx->pc = 0x17907cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x179080: 0x223100b
    ctx->pc = 0x179080u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x179084: 0xae000008
    ctx->pc = 0x179084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x179088: 0xae020020
    ctx->pc = 0x179088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_17908c:
    // 0x17908c: 0xdfbf0050
    ctx->pc = 0x17908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179090: 0xdfb40040
    ctx->pc = 0x179090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179094: 0xdfb30030
    ctx->pc = 0x179094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179098: 0xdfb20020
    ctx->pc = 0x179098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17909c: 0xdfb10010
    ctx->pc = 0x17909cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1790a0: 0xdfb00000
    ctx->pc = 0x1790a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1790a4: 0x3e00008
    ctx->pc = 0x1790A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178FE4u: goto label_178fe4;
            case 0x178FF8u: goto label_178ff8;
            case 0x179008u: goto label_179008;
            case 0x179018u: goto label_179018;
            case 0x179068u: goto label_179068;
            case 0x17908Cu: goto label_17908c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1790ACu;
}
