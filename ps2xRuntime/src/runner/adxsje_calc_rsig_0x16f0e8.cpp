#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_calc_rsig
// Address: 0x16f0e8 - 0x16f33c
void adxsje_calc_rsig_0x16f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_calc_rsig");


    ctx->pc = 0x16f0e8u;

    // 0x16f0e8: 0x27bdff50
    ctx->pc = 0x16f0e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16f0ec: 0xffb00010
    ctx->pc = 0x16f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f0f0: 0xffb30040
    ctx->pc = 0x16f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x16f0f4: 0xa0802d
    ctx->pc = 0x16f0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f0f8: 0xffb70080
    ctx->pc = 0x16f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x16f0fc: 0x80982d
    ctx->pc = 0x16f0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f100: 0xffb60070
    ctx->pc = 0x16f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16f104: 0x101080
    ctx->pc = 0x16f104u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16f108: 0xffb40050
    ctx->pc = 0x16f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16f10c: 0x2621021
    ctx->pc = 0x16f10cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f110: 0xffb10020
    ctx->pc = 0x16f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16f114: 0x10a040
    ctx->pc = 0x16f114u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 16), 1));
    // 0x16f118: 0xffbf00a0
    ctx->pc = 0x16f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16f11c: 0x26770088
    ctx->pc = 0x16f11cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 136));
    // 0x16f120: 0xffbe0090
    ctx->pc = 0x16f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x16f124: 0x2676008c
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 140));
    // 0x16f128: 0xffb50060
    ctx->pc = 0x16f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16f12c: 0x2f41821
    ctx->pc = 0x16f12cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x16f130: 0xffb20030
    ctx->pc = 0x16f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16f134: 0x2d43821
    ctx->pc = 0x16f134u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x16f138: 0x8c520080
    ctx->pc = 0x16f138u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16f13c: 0x882d
    ctx->pc = 0x16f13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f140: 0x84650000
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f144: 0x84e60000
    ctx->pc = 0x16f144u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f148: 0x240202d
    ctx->pc = 0x16f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f14c: 0xc05bb78
    ctx->pc = 0x16F14Cu;
    SET_GPR_U32(ctx, 31, 0x16F154u);
    ctx->pc = 0x16F150u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->pc = 0x16EDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_set_delay_0x16ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F154u; }
        else if (ctx->pc != 0x16F154u) { ctx->pc = 0x16F154u; }
    }
    if (ctx->pc != 0x16F154u) { return; }
    ctx->pc = 0x16F154u;
    // 0x16f154: 0x8e620044
    ctx->pc = 0x16f154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f158: 0x1840000e
    ctx->pc = 0x16F158u;
    {
        const bool branch_taken_0x16f158 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F15Cu;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x16f158) {
            ctx->pc = 0x16F194u;
            goto label_16f194;
        }
    }
    ctx->pc = 0x16F160u;
    // 0x16f160: 0x111840
    ctx->pc = 0x16f160u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x16f164: 0x0
    ctx->pc = 0x16f164u;
    // NOP
label_16f168:
    // 0x16f168: 0x2b31021
    ctx->pc = 0x16f168u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x16f16c: 0x621821
    ctx->pc = 0x16f16cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f170: 0x220282d
    ctx->pc = 0x16f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f174: 0x84660090
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x16f178: 0x240202d
    ctx->pc = 0x16f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f17c: 0xc05bb7c
    ctx->pc = 0x16F17Cu;
    SET_GPR_U32(ctx, 31, 0x16F184u);
    ctx->pc = 0x16F180u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x16EDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_put_sig_0x16edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F184u; }
        else if (ctx->pc != 0x16F184u) { ctx->pc = 0x16F184u; }
    }
    if (ctx->pc != 0x16F184u) { return; }
    ctx->pc = 0x16F184u;
    // 0x16f184: 0x8e620044
    ctx->pc = 0x16f184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f188: 0x222102a
    ctx->pc = 0x16f188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x16f18c: 0x1440fff6
    ctx->pc = 0x16F18Cu;
    {
        const bool branch_taken_0x16f18c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F190u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x16f18c) {
            ctx->pc = 0x16F168u;
            goto label_16f168;
        }
    }
    ctx->pc = 0x16F194u;
label_16f194:
    // 0x16f194: 0x240202d
    ctx->pc = 0x16f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f198: 0xc05bbb2
    ctx->pc = 0x16F198u;
    SET_GPR_U32(ctx, 31, 0x16F1A0u);
    ctx->pc = 0x16F19Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EEC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_calc_gain_0x16eec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1A0u; }
        else if (ctx->pc != 0x16F1A0u) { ctx->pc = 0x16F1A0u; }
    }
    if (ctx->pc != 0x16F1A0u) { return; }
    ctx->pc = 0x16F1A0u;
    // 0x16f1a0: 0x2d41021
    ctx->pc = 0x16f1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x16f1a4: 0x2f41821
    ctx->pc = 0x16f1a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x16f1a8: 0x84650000
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f1ac: 0x84460000
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f1b0: 0xc05bb02
    ctx->pc = 0x16F1B0u;
    SET_GPR_U32(ctx, 31, 0x16F1B8u);
    ctx->pc = 0x16F1B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->pc = 0x16EC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_set_delay_0x16ec08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1B8u; }
        else if (ctx->pc != 0x16F1B8u) { ctx->pc = 0x16F1B8u; }
    }
    if (ctx->pc != 0x16F1B8u) { return; }
    ctx->pc = 0x16F1B8u;
    // 0x16f1b8: 0x8e620044
    ctx->pc = 0x16f1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f1bc: 0x18400052
    ctx->pc = 0x16F1BCu;
    {
        const bool branch_taken_0x16f1bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F1C0u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x16f1bc) {
            ctx->pc = 0x16F308u;
            goto label_16f308;
        }
    }
    ctx->pc = 0x16F1C4u;
    // 0x16f1c4: 0x27b40002
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 2));
    // 0x16f1c8: 0x2b31021
    ctx->pc = 0x16f1c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x16f1cc: 0x0
    ctx->pc = 0x16f1ccu;
    // NOP
label_16f1d0:
    // 0x16f1d0: 0x111840
    ctx->pc = 0x16f1d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x16f1d4: 0x621821
    ctx->pc = 0x16f1d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f1d8: 0x3c0202d
    ctx->pc = 0x16f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1dc: 0x84700090
    ctx->pc = 0x16f1dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x16f1e0: 0x3a0282d
    ctx->pc = 0x16f1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1e4: 0xc05bb06
    ctx->pc = 0x16F1E4u;
    SET_GPR_U32(ctx, 31, 0x16F1ECu);
    ctx->pc = 0x16F1E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_get_delay_0x16ec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1ECu; }
        else if (ctx->pc != 0x16F1ECu) { ctx->pc = 0x16F1ECu; }
    }
    if (ctx->pc != 0x16F1ECu) { return; }
    ctx->pc = 0x16F1ECu;
    // 0x16f1ec: 0x97a60002
    ctx->pc = 0x16f1ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x16f1f0: 0x240202d
    ctx->pc = 0x16f1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1f4: 0x87a50000
    ctx->pc = 0x16f1f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f1f8: 0x63400
    ctx->pc = 0x16f1f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16f1fc: 0xc05bb78
    ctx->pc = 0x16F1FCu;
    SET_GPR_U32(ctx, 31, 0x16F204u);
    ctx->pc = 0x16F200u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->pc = 0x16EDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_set_delay_0x16ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F204u; }
        else if (ctx->pc != 0x16F204u) { ctx->pc = 0x16F204u; }
    }
    if (ctx->pc != 0x16F204u) { return; }
    ctx->pc = 0x16F204u;
    // 0x16f204: 0x200302d
    ctx->pc = 0x16f204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f208: 0x240202d
    ctx->pc = 0x16f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f20c: 0xc05bb7c
    ctx->pc = 0x16F20Cu;
    SET_GPR_U32(ctx, 31, 0x16F214u);
    ctx->pc = 0x16F210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_put_sig_0x16edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F214u; }
        else if (ctx->pc != 0x16F214u) { ctx->pc = 0x16F214u; }
    }
    if (ctx->pc != 0x16F214u) { return; }
    ctx->pc = 0x16F214u;
    // 0x16f214: 0x240202d
    ctx->pc = 0x16f214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f218: 0xc05bbd0
    ctx->pc = 0x16F218u;
    SET_GPR_U32(ctx, 31, 0x16F220u);
    ctx->pc = 0x16F21Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_get_rsig_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F220u; }
        else if (ctx->pc != 0x16F220u) { ctx->pc = 0x16F220u; }
    }
    if (ctx->pc != 0x16F220u) { return; }
    ctx->pc = 0x16F220u;
    // 0x16f220: 0xc052e16
    ctx->pc = 0x16F220u;
    SET_GPR_U32(ctx, 31, 0x16F228u);
    ctx->pc = 0x16F224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F228u; }
        else if (ctx->pc != 0x16F228u) { ctx->pc = 0x16F228u; }
    }
    if (ctx->pc != 0x16F228u) { return; }
    ctx->pc = 0x16F228u;
    // 0x16f228: 0xde450080
    ctx->pc = 0x16f228u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x16f22c: 0xc052cb8
    ctx->pc = 0x16F22Cu;
    SET_GPR_U32(ctx, 31, 0x16F234u);
    ctx->pc = 0x16F230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F234u; }
        else if (ctx->pc != 0x16F234u) { ctx->pc = 0x16F234u; }
    }
    if (ctx->pc != 0x16F234u) { return; }
    ctx->pc = 0x16F234u;
    // 0x16f234: 0xc052e44
    ctx->pc = 0x16F234u;
    SET_GPR_U32(ctx, 31, 0x16F23Cu);
    ctx->pc = 0x16F238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F23Cu; }
        else if (ctx->pc != 0x16F23Cu) { ctx->pc = 0x16F23Cu; }
    }
    if (ctx->pc != 0x16F23Cu) { return; }
    ctx->pc = 0x16F23Cu;
    // 0x16f23c: 0x3c04ffff
    ctx->pc = 0x16f23cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x16f240: 0x40802d
    ctx->pc = 0x16f240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f244: 0x34847fff
    ctx->pc = 0x16f244u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32767));
    // 0x16f248: 0x24028000
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16f24c: 0x90202a
    ctx->pc = 0x16f24cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
    // 0x16f250: 0x24057fff
    ctx->pc = 0x16f250u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16f254: 0x204100b
    ctx->pc = 0x16f254u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x16f258: 0xa2182a
    ctx->pc = 0x16f258u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x16f25c: 0xa3100b
    ctx->pc = 0x16f25cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x16f260: 0x21400
    ctx->pc = 0x16f260u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f264: 0x28403
    ctx->pc = 0x16f264u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f268: 0x6010002
    ctx->pc = 0x16F268u;
    {
        const bool branch_taken_0x16f268 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16F26Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2340));
        if (branch_taken_0x16f268) {
            ctx->pc = 0x16F274u;
            goto label_16f274;
        }
    }
    ctx->pc = 0x16F270u;
    // 0x16f270: 0x2602f6dc
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294964956));
label_16f274:
    // 0x16f274: 0x24031249
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4681));
    // 0x16f278: 0x43001a
    ctx->pc = 0x16f278u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16f27c: 0x50600001
    ctx->pc = 0x16F27Cu;
    {
        const bool branch_taken_0x16f27c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f27c) {
            ctx->pc = 0x16F280u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16F284u;
            goto label_16f284;
        }
    }
    ctx->pc = 0x16F284u;
label_16f284:
    // 0x16f284: 0x1012
    ctx->pc = 0x16f284u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x16f288: 0x40802d
    ctx->pc = 0x16f288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f28c: 0x2402fff7
    ctx->pc = 0x16f28cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16f290: 0x2403fff8
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x16f294: 0x50102a
    ctx->pc = 0x16f294u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x16f298: 0x24060007
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f29c: 0x62800a
    ctx->pc = 0x16f29cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x16f2a0: 0x220282d
    ctx->pc = 0x16f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2a4: 0x2a020008
    ctx->pc = 0x16f2a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x16f2a8: 0x240202d
    ctx->pc = 0x16f2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2ac: 0xc2800a
    ctx->pc = 0x16f2acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
    // 0x16f2b0: 0x26310001
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x16f2b4: 0x103600
    ctx->pc = 0x16f2b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 24));
    // 0x16f2b8: 0xc05bbde
    ctx->pc = 0x16F2B8u;
    SET_GPR_U32(ctx, 31, 0x16F2C0u);
    ctx->pc = 0x16F2BCu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->pc = 0x16EF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_set_rsig_q_0x16ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C0u; }
        else if (ctx->pc != 0x16F2C0u) { ctx->pc = 0x16F2C0u; }
    }
    if (ctx->pc != 0x16F2C0u) { return; }
    ctx->pc = 0x16F2C0u;
    // 0x16f2c0: 0x8642007c
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x16f2c4: 0x3c03ffff
    ctx->pc = 0x16f2c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x16f2c8: 0x34637fff
    ctx->pc = 0x16f2c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x16f2cc: 0x24058000
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16f2d0: 0x2028018
    ctx->pc = 0x16f2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x16f2d4: 0x24067fff
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16f2d8: 0x8e440088
    ctx->pc = 0x16f2d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x16f2dc: 0x70182a
    ctx->pc = 0x16f2dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x16f2e0: 0x203280b
    ctx->pc = 0x16f2e0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 16));
    // 0x16f2e4: 0xc5102a
    ctx->pc = 0x16f2e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x16f2e8: 0xc2280b
    ctx->pc = 0x16f2e8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x16f2ec: 0x52c00
    ctx->pc = 0x16f2ecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x16f2f0: 0xc05bb0c
    ctx->pc = 0x16F2F0u;
    SET_GPR_U32(ctx, 31, 0x16F2F8u);
    ctx->pc = 0x16F2F4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->pc = 0x16EC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_put_sig_0x16ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2F8u; }
        else if (ctx->pc != 0x16F2F8u) { ctx->pc = 0x16F2F8u; }
    }
    if (ctx->pc != 0x16F2F8u) { return; }
    ctx->pc = 0x16F2F8u;
    // 0x16f2f8: 0x8e630044
    ctx->pc = 0x16f2f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f2fc: 0x223182a
    ctx->pc = 0x16f2fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x16f300: 0x1460ffb3
    ctx->pc = 0x16F300u;
    {
        const bool branch_taken_0x16f300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F304u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        if (branch_taken_0x16f300) {
            ctx->pc = 0x16F1D0u;
            goto label_16f1d0;
        }
    }
    ctx->pc = 0x16F308u;
label_16f308:
    // 0x16f308: 0xdfbf00a0
    ctx->pc = 0x16f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16f30c: 0x102d
    ctx->pc = 0x16f30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f310: 0xdfbe0090
    ctx->pc = 0x16f310u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f314: 0xdfb70080
    ctx->pc = 0x16f314u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f318: 0xdfb60070
    ctx->pc = 0x16f318u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f31c: 0xdfb50060
    ctx->pc = 0x16f31cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f320: 0xdfb40050
    ctx->pc = 0x16f320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f324: 0xdfb30040
    ctx->pc = 0x16f324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f328: 0xdfb20030
    ctx->pc = 0x16f328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f32c: 0xdfb10020
    ctx->pc = 0x16f32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f330: 0xdfb00010
    ctx->pc = 0x16f330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f334: 0x3e00008
    ctx->pc = 0x16F334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F168u: goto label_16f168;
            case 0x16F194u: goto label_16f194;
            case 0x16F1D0u: goto label_16f1d0;
            case 0x16F274u: goto label_16f274;
            case 0x16F284u: goto label_16f284;
            case 0x16F308u: goto label_16f308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F33Cu;
}
