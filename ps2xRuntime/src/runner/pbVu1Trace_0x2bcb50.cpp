#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1Trace
// Address: 0x2bcb50 - 0x2bcd60
void pbVu1Trace_0x2bcb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bcb50u;

    // 0x2bcb50: 0x27bdffe0
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcb54: 0xffbf0010
    ctx->pc = 0x2bcb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcb58: 0xffb00000
    ctx->pc = 0x2bcb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bcb5c: 0x80802d
    ctx->pc = 0x2bcb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb60: 0x3c020037
    ctx->pc = 0x2bcb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcb64: 0x8c42ba24
    ctx->pc = 0x2bcb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949412)));
    // 0x2bcb68: 0x2443270f
    ctx->pc = 0x2bcb68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9999));
    // 0x2bcb6c: 0xae030028
    ctx->pc = 0x2bcb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2bcb70: 0xae020024
    ctx->pc = 0x2bcb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2bcb74: 0xae020020
    ctx->pc = 0x2bcb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2bcb78: 0x3c05003b
    ctx->pc = 0x2bcb78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcb7c: 0xc0aeed2
    ctx->pc = 0x2BCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB84u);
    ctx->pc = 0x2BCB80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25504));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB84u; }
    }
    if (ctx->pc != 0x2BCB84u) { return; }
    ctx->pc = 0x2BCB84u;
    // 0x2bcb84: 0x8e02001c
    ctx->pc = 0x2bcb84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2bcb88: 0x14400008
    ctx->pc = 0x2BCB88u;
    {
        const bool branch_taken_0x2bcb88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BCB8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb88) {
            ctx->pc = 0x2BCBACu;
            goto label_2bcbac;
        }
    }
    ctx->pc = 0x2BCB90u;
    // 0x2bcb90: 0x24020001
    ctx->pc = 0x2bcb90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcb94: 0xae02001c
    ctx->pc = 0x2bcb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2bcb98: 0x3c05003b
    ctx->pc = 0x2bcb98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcb9c: 0xc0aeed2
    ctx->pc = 0x2BCB9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCBA4u);
    ctx->pc = 0x2BCBA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25672));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBA4u; }
    }
    if (ctx->pc != 0x2BCBA4u) { return; }
    ctx->pc = 0x2BCBA4u;
    // 0x2bcba4: 0x10000005
    ctx->pc = 0x2BCBA4u;
    {
        const bool branch_taken_0x2bcba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCBA8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x2bcba4) {
            ctx->pc = 0x2BCBBCu;
            goto label_2bcbbc;
        }
    }
    ctx->pc = 0x2BCBACu;
label_2bcbac:
    // 0x2bcbac: 0x3c05003b
    ctx->pc = 0x2bcbacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcbb0: 0xc0aeed2
    ctx->pc = 0x2BCBB0u;
    SET_GPR_U32(ctx, 31, 0x2BCBB8u);
    ctx->pc = 0x2BCBB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25696));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBB8u; }
    }
    if (ctx->pc != 0x2BCBB8u) { return; }
    ctx->pc = 0x2BCBB8u;
    // 0x2bcbb8: 0x8e03002c
    ctx->pc = 0x2bcbb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2bcbbc:
    // 0x2bcbbc: 0x24020018
    ctx->pc = 0x2bcbbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bcbc0: 0x621818
    ctx->pc = 0x2bcbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bcbc4: 0x2031021
    ctx->pc = 0x2bcbc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bcbc8: 0x40182d
    ctx->pc = 0x2bcbc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbcc: 0x200202d
    ctx->pc = 0x2bcbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbd0: 0x3c05003b
    ctx->pc = 0x2bcbd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcbd4: 0x24a56478
    ctx->pc = 0x2bcbd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25720));
    // 0x2bcbd8: 0x9446003c
    ctx->pc = 0x2bcbd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bcbdc: 0xc0aeed2
    ctx->pc = 0x2BCBDCu;
    SET_GPR_U32(ctx, 31, 0x2BCBE4u);
    ctx->pc = 0x2BCBE0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBE4u; }
    }
    if (ctx->pc != 0x2BCBE4u) { return; }
    ctx->pc = 0x2BCBE4u;
    // 0x2bcbe4: 0x3c020037
    ctx->pc = 0x2bcbe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcbe8: 0x8c4225d8
    ctx->pc = 0x2bcbe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9688)));
    // 0x2bcbec: 0x8c420004
    ctx->pc = 0x2bcbecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bcbf0: 0x30420f00
    ctx->pc = 0x2bcbf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3840));
    // 0x2bcbf4: 0x14400005
    ctx->pc = 0x2BCBF4u;
    {
        const bool branch_taken_0x2bcbf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BCBF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bcbf4) {
            ctx->pc = 0x2BCC0Cu;
            goto label_2bcc0c;
        }
    }
    ctx->pc = 0x2BCBFCu;
    // 0x2bcbfc: 0x3c05003b
    ctx->pc = 0x2bcbfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcc00: 0xc0aeed2
    ctx->pc = 0x2BCC00u;
    SET_GPR_U32(ctx, 31, 0x2BCC08u);
    ctx->pc = 0x2BCC04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25752));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC08u; }
    }
    if (ctx->pc != 0x2BCC08u) { return; }
    ctx->pc = 0x2BCC08u;
    // 0x2bcc08: 0x200202d
    ctx->pc = 0x2bcc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcc0c:
    // 0x2bcc0c: 0x3c05003b
    ctx->pc = 0x2bcc0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcc10: 0xc0aeed2
    ctx->pc = 0x2BCC10u;
    SET_GPR_U32(ctx, 31, 0x2BCC18u);
    ctx->pc = 0x2BCC14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25784));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC18u; }
    }
    if (ctx->pc != 0x2BCC18u) { return; }
    ctx->pc = 0x2BCC18u;
    // 0x2bcc18: 0x8e020000
    ctx->pc = 0x2bcc18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcc1c: 0x8c430034
    ctx->pc = 0x2bcc1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2bcc20: 0x8e020010
    ctx->pc = 0x2bcc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bcc24: 0x8c630000
    ctx->pc = 0x2bcc24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bcc28: 0x43102a
    ctx->pc = 0x2bcc28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2bcc2c: 0x50400001
    ctx->pc = 0x2BCC2Cu;
    {
        const bool branch_taken_0x2bcc2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bcc2c) {
            ctx->pc = 0x2BCC30u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->pc = 0x2BCC34u;
            goto label_2bcc34;
        }
    }
    ctx->pc = 0x2BCC34u;
label_2bcc34:
    // 0x2bcc34: 0x200202d
    ctx->pc = 0x2bcc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc38: 0x3c05003b
    ctx->pc = 0x2bcc38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcc3c: 0xc0acc8e
    ctx->pc = 0x2BCC3Cu;
    SET_GPR_U32(ctx, 31, 0x2BCC44u);
    ctx->pc = 0x2BCC40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12624));
    ctx->pc = 0x2B3238u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1IReg_0x2b3238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC44u; }
    }
    if (ctx->pc != 0x2BCC44u) { return; }
    ctx->pc = 0x2BCC44u;
    // 0x2bcc44: 0x21100
    ctx->pc = 0x2bcc44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bcc48: 0xa6020014
    ctx->pc = 0x2bcc48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bcc4c: 0x200202d
    ctx->pc = 0x2bcc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc50: 0x3c05003b
    ctx->pc = 0x2bcc50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcc54: 0x24a564d0
    ctx->pc = 0x2bcc54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25808));
    // 0x2bcc58: 0xc0acd4a
    ctx->pc = 0x2BCC58u;
    SET_GPR_U32(ctx, 31, 0x2BCC60u);
    ctx->pc = 0x2BCC5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3528u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataI_0x2b3528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC60u; }
    }
    if (ctx->pc != 0x2BCC60u) { return; }
    ctx->pc = 0x2BCC60u;
    // 0x2bcc60: 0x21100
    ctx->pc = 0x2bcc60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bcc64: 0xa6020018
    ctx->pc = 0x2bcc64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bcc68: 0x96030014
    ctx->pc = 0x2bcc68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bcc6c: 0x24631090
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4240));
    // 0x2bcc70: 0xa6030016
    ctx->pc = 0x2bcc70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bcc74: 0x24421090
    ctx->pc = 0x2bcc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4240));
    // 0x2bcc78: 0xa602001a
    ctx->pc = 0x2bcc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bcc7c: 0x8e07000c
    ctx->pc = 0x2bcc7cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bcc80: 0x200202d
    ctx->pc = 0x2bcc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc84: 0x3c05003b
    ctx->pc = 0x2bcc84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcc88: 0x24a564e0
    ctx->pc = 0x2bcc88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25824));
    // 0x2bcc8c: 0xe0302d
    ctx->pc = 0x2bcc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc90: 0xc0aeed2
    ctx->pc = 0x2BCC90u;
    SET_GPR_U32(ctx, 31, 0x2BCC98u);
    ctx->pc = 0x2BCC94u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC98u; }
    }
    if (ctx->pc != 0x2BCC98u) { return; }
    ctx->pc = 0x2BCC98u;
    // 0x2bcc98: 0x8e060000
    ctx->pc = 0x2bcc98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcc9c: 0x8e020010
    ctx->pc = 0x2bcc9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bcca0: 0x8cc30030
    ctx->pc = 0x2bcca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2bcca4: 0x21100
    ctx->pc = 0x2bcca4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bcca8: 0x431021
    ctx->pc = 0x2bcca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bccac: 0x200202d
    ctx->pc = 0x2bccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccb0: 0x3c05003b
    ctx->pc = 0x2bccb0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bccb4: 0x24a564f8
    ctx->pc = 0x2bccb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25848));
    // 0x2bccb8: 0x8cc60000
    ctx->pc = 0x2bccb8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bccbc: 0xc0aeed2
    ctx->pc = 0x2BCCBCu;
    SET_GPR_U32(ctx, 31, 0x2BCCC4u);
    ctx->pc = 0x2BCCC0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCC4u; }
    }
    if (ctx->pc != 0x2BCCC4u) { return; }
    ctx->pc = 0x2BCCC4u;
    // 0x2bccc4: 0x200202d
    ctx->pc = 0x2bccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccc8: 0x3c05003b
    ctx->pc = 0x2bccc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcccc: 0x24a56508
    ctx->pc = 0x2bccccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25864));
    // 0x2bccd0: 0xc0aeed2
    ctx->pc = 0x2BCCD0u;
    SET_GPR_U32(ctx, 31, 0x2BCCD8u);
    ctx->pc = 0x2BCCD4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCD8u; }
    }
    if (ctx->pc != 0x2BCCD8u) { return; }
    ctx->pc = 0x2BCCD8u;
    // 0x2bccd8: 0xc0af2c4
    ctx->pc = 0x2BCCD8u;
    SET_GPR_U32(ctx, 31, 0x2BCCE0u);
    ctx->pc = 0x2BCCDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        showSourceLine_0x2bcb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCE0u; }
    }
    if (ctx->pc != 0x2BCCE0u) { return; }
    ctx->pc = 0x2BCCE0u;
    // 0x2bcce0: 0x8e030000
    ctx->pc = 0x2bcce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcce4: 0x8e020010
    ctx->pc = 0x2bcce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bcce8: 0x8c630030
    ctx->pc = 0x2bcce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bccec: 0x21100
    ctx->pc = 0x2bccecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bccf0: 0x431021
    ctx->pc = 0x2bccf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bccf4: 0x200202d
    ctx->pc = 0x2bccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccf8: 0x3c05003b
    ctx->pc = 0x2bccf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bccfc: 0x24a56518
    ctx->pc = 0x2bccfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25880));
    // 0x2bcd00: 0xc0aeed2
    ctx->pc = 0x2BCD00u;
    SET_GPR_U32(ctx, 31, 0x2BCD08u);
    ctx->pc = 0x2BCD04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD08u; }
    }
    if (ctx->pc != 0x2BCD08u) { return; }
    ctx->pc = 0x2BCD08u;
    // 0x2bcd08: 0xc0af222
    ctx->pc = 0x2BCD08u;
    SET_GPR_U32(ctx, 31, 0x2BCD10u);
    ctx->pc = 0x2BCD0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BC888u;
    {
        const uint32_t __entryPc = ctx->pc;
        showVu1Data_0x2bc888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD10u; }
    }
    if (ctx->pc != 0x2BCD10u) { return; }
    ctx->pc = 0x2BCD10u;
    // 0x2bcd10: 0x3c020037
    ctx->pc = 0x2bcd10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcd14: 0x3c04003b
    ctx->pc = 0x2bcd14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcd18: 0x24844648
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2bcd1c: 0xc0b4a34
    ctx->pc = 0x2BCD1Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD24u);
    ctx->pc = 0x2BCD20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294949412)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD24u; }
    }
    if (ctx->pc != 0x2BCD24u) { return; }
    ctx->pc = 0x2BCD24u;
    // 0x2bcd24: 0x3c04003b
    ctx->pc = 0x2bcd24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcd28: 0xc0b4a34
    ctx->pc = 0x2BCD28u;
    SET_GPR_U32(ctx, 31, 0x2BCD30u);
    ctx->pc = 0x2BCD2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD30u; }
    }
    if (ctx->pc != 0x2BCD30u) { return; }
    ctx->pc = 0x2BCD30u;
    // 0x2bcd30: 0x8e030000
    ctx->pc = 0x2bcd30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcd34: 0x8e020010
    ctx->pc = 0x2bcd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bcd38: 0x8c630030
    ctx->pc = 0x2bcd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bcd3c: 0x21100
    ctx->pc = 0x2bcd3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bcd40: 0x431021
    ctx->pc = 0x2bcd40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcd44: 0x3c04003b
    ctx->pc = 0x2bcd44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcd48: 0x24846558
    ctx->pc = 0x2bcd48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25944));
    // 0x2bcd4c: 0x8c450004
    ctx->pc = 0x2bcd4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bcd50: 0xdfbf0010
    ctx->pc = 0x2bcd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcd54: 0xdfb00000
    ctx->pc = 0x2bcd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcd58: 0x80b4a34
    ctx->pc = 0x2BCD58u;
    ctx->pc = 0x2BCD5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BCD60u;
}
