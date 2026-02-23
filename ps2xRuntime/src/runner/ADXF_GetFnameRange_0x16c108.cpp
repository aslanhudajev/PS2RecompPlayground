#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetFnameRange
// Address: 0x16c108 - 0x16c284
void ADXF_GetFnameRange_0x16c108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetFnameRange");


    ctx->pc = 0x16c108u;

    // 0x16c108: 0x27bdff70
    ctx->pc = 0x16c108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16c10c: 0xffb10010
    ctx->pc = 0x16c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16c110: 0xffb00000
    ctx->pc = 0x16c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c114: 0xa0882d
    ctx->pc = 0x16c114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c118: 0xffb70070
    ctx->pc = 0x16c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x16c11c: 0x80802d
    ctx->pc = 0x16c11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c120: 0xffb60060
    ctx->pc = 0x16c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16c124: 0xc0b82d
    ctx->pc = 0x16c124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c128: 0xffb50050
    ctx->pc = 0x16c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16c12c: 0x100b02d
    ctx->pc = 0x16c12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c130: 0xffb40040
    ctx->pc = 0x16c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16c134: 0xe0a82d
    ctx->pc = 0x16c134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c138: 0xffbf0080
    ctx->pc = 0x16c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16c13c: 0xffb30030
    ctx->pc = 0x16c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16c140: 0xc05b024
    ctx->pc = 0x16C140u;
    SET_GPR_U32(ctx, 31, 0x16C148u);
    ctx->pc = 0x16C144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x16C090u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmGfr_0x16c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C148u; }
        else if (ctx->pc != 0x16C148u) { ctx->pc = 0x16C148u; }
    }
    if (ctx->pc != 0x16C148u) { return; }
    ctx->pc = 0x16C148u;
    // 0x16c148: 0x40a02d
    ctx->pc = 0x16c148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c14c: 0x6830005
    ctx->pc = 0x16C14Cu;
    {
        const bool branch_taken_0x16c14c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x16c14c) {
            ctx->pc = 0x16C150u;
            SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
            ctx->pc = 0x16C164u;
            goto label_16c164;
        }
    }
    ctx->pc = 0x16C154u;
    // 0x16c154: 0x2403ffff
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c158: 0xaea30000
    ctx->pc = 0x16c158u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x16c15c: 0x1000003e
    ctx->pc = 0x16C15Cu;
    {
        const bool branch_taken_0x16c15c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C160u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x16c15c) {
            ctx->pc = 0x16C258u;
            goto label_16c258;
        }
    }
    ctx->pc = 0x16C164u;
label_16c164:
    // 0x16c164: 0x101880
    ctx->pc = 0x16c164u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16c168: 0x2442c918
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16c16c: 0x621821
    ctx->pc = 0x16c16cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c170: 0x8c650000
    ctx->pc = 0x16c170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c174: 0x8ca90000
    ctx->pc = 0x16c174u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c178: 0x51200014
    ctx->pc = 0x16C178u;
    {
        const bool branch_taken_0x16c178 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c178) {
            ctx->pc = 0x16C17Cu;
            SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 276)));
            ctx->pc = 0x16C1CCu;
            goto label_16c1cc;
        }
    }
    ctx->pc = 0x16C180u;
label_16c180:
    // 0x16c180: 0x94a2000c
    ctx->pc = 0x16c180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16c184: 0x24a70114
    ctx->pc = 0x16c184u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 276));
    // 0x16c188: 0x1040000b
    ctx->pc = 0x16C188u;
    {
        const bool branch_taken_0x16c188 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C18Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c188) {
            ctx->pc = 0x16C1B8u;
            goto label_16c1b8;
        }
    }
    ctx->pc = 0x16C190u;
    // 0x16c190: 0x40402d
    ctx->pc = 0x16c190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c194: 0xe0202d
    ctx->pc = 0x16c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c198:
    // 0x16c198: 0x610c0
    ctx->pc = 0x16c198u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x16c19c: 0x94830000
    ctx->pc = 0x16c19cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c1a0: 0x10710019
    ctx->pc = 0x16C1A0u;
    {
        const bool branch_taken_0x16c1a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        ctx->pc = 0x16C1A4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x16c1a0) {
            ctx->pc = 0x16C208u;
            goto label_16c208;
        }
    }
    ctx->pc = 0x16C1A8u;
    // 0x16c1a8: 0x24c60001
    ctx->pc = 0x16c1a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16c1ac: 0xc8102a
    ctx->pc = 0x16c1acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
    // 0x16c1b0: 0x1440fff9
    ctx->pc = 0x16C1B0u;
    {
        const bool branch_taken_0x16c1b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C1B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x16c1b0) {
            ctx->pc = 0x16C198u;
            goto label_16c198;
        }
    }
    ctx->pc = 0x16C1B8u;
label_16c1b8:
    // 0x16c1b8: 0x120282d
    ctx->pc = 0x16c1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1bc: 0x8ca20000
    ctx->pc = 0x16c1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c1c0: 0x1440ffef
    ctx->pc = 0x16C1C0u;
    {
        const bool branch_taken_0x16c1c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C1C4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c1c0) {
            ctx->pc = 0x16C180u;
            goto label_16c180;
        }
    }
    ctx->pc = 0x16C1C8u;
    // 0x16c1c8: 0x94b00114
    ctx->pc = 0x16c1c8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 276)));
label_16c1cc:
    // 0x16c1cc: 0x24b30116
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 278));
    // 0x16c1d0: 0x1a200017
    ctx->pc = 0x16C1D0u;
    {
        const bool branch_taken_0x16c1d0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x16C1D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c1d0) {
            ctx->pc = 0x16C230u;
            goto label_16c230;
        }
    }
    ctx->pc = 0x16C1D8u;
    // 0x16c1d8: 0x24a50010
    ctx->pc = 0x16c1d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x16c1dc: 0x119040
    ctx->pc = 0x16c1dcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 1));
label_16c1e0:
    // 0x16c1e0: 0x61040
    ctx->pc = 0x16c1e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x16c1e4: 0x531021
    ctx->pc = 0x16c1e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16c1e8: 0x24c60001
    ctx->pc = 0x16c1e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16c1ec: 0x94430000
    ctx->pc = 0x16c1ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c1f0: 0xd1202a
    ctx->pc = 0x16c1f0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 17)));
    // 0x16c1f4: 0x2038021
    ctx->pc = 0x16c1f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16c1f8: 0x1480fff9
    ctx->pc = 0x16C1F8u;
    {
        const bool branch_taken_0x16c1f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c1f8) {
            ctx->pc = 0x16C1E0u;
            goto label_16c1e0;
        }
    }
    ctx->pc = 0x16C200u;
    // 0x16c200: 0x1000000e
    ctx->pc = 0x16C200u;
    {
        const bool branch_taken_0x16c200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C204u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c200) {
            ctx->pc = 0x16C23Cu;
            goto label_16c23c;
        }
    }
    ctx->pc = 0x16C208u;
label_16c208:
    // 0x16c208: 0x2e0202d
    ctx->pc = 0x16c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c20c: 0x24a50010
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x16c210: 0xc05167c
    ctx->pc = 0x16C210u;
    SET_GPR_U32(ctx, 31, 0x16C218u);
    ctx->pc = 0x16C214u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C218u; }
        else if (ctx->pc != 0x16C218u) { ctx->pc = 0x16C218u; }
    }
    if (ctx->pc != 0x16C218u) { return; }
    ctx->pc = 0x16C218u;
    // 0x16c218: 0x8e040004
    ctx->pc = 0x16c218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c21c: 0x280102d
    ctx->pc = 0x16c21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c220: 0x96030002
    ctx->pc = 0x16c220u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16c224: 0xaea40000
    ctx->pc = 0x16c224u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x16c228: 0x1000000b
    ctx->pc = 0x16C228u;
    {
        const bool branch_taken_0x16c228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C22Cu;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x16c228) {
            ctx->pc = 0x16C258u;
            goto label_16c258;
        }
    }
    ctx->pc = 0x16C230u;
label_16c230:
    // 0x16c230: 0x24a50010
    ctx->pc = 0x16c230u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x16c234: 0x119040
    ctx->pc = 0x16c234u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 1));
    // 0x16c238: 0x2e0202d
    ctx->pc = 0x16c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16c23c:
    // 0x16c23c: 0xc05167c
    ctx->pc = 0x16C23Cu;
    SET_GPR_U32(ctx, 31, 0x16C244u);
    ctx->pc = 0x16C240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C244u; }
        else if (ctx->pc != 0x16C244u) { ctx->pc = 0x16C244u; }
    }
    if (ctx->pc != 0x16C244u) { return; }
    ctx->pc = 0x16C244u;
    // 0x16c244: 0x2531821
    ctx->pc = 0x16c244u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x16c248: 0xaeb00000
    ctx->pc = 0x16c248u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x16c24c: 0x94640000
    ctx->pc = 0x16c24cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c250: 0x280102d
    ctx->pc = 0x16c250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c254: 0xaec40000
    ctx->pc = 0x16c254u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_16c258:
    // 0x16c258: 0xdfbf0080
    ctx->pc = 0x16c258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16c25c: 0xdfb70070
    ctx->pc = 0x16c25cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c260: 0xdfb60060
    ctx->pc = 0x16c260u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c264: 0xdfb50050
    ctx->pc = 0x16c264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c268: 0xdfb40040
    ctx->pc = 0x16c268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c26c: 0xdfb30030
    ctx->pc = 0x16c26cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c270: 0xdfb20020
    ctx->pc = 0x16c270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c274: 0xdfb10010
    ctx->pc = 0x16c274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c278: 0xdfb00000
    ctx->pc = 0x16c278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c27c: 0x3e00008
    ctx->pc = 0x16C27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C164u: goto label_16c164;
            case 0x16C180u: goto label_16c180;
            case 0x16C198u: goto label_16c198;
            case 0x16C1B8u: goto label_16c1b8;
            case 0x16C1CCu: goto label_16c1cc;
            case 0x16C1E0u: goto label_16c1e0;
            case 0x16C208u: goto label_16c208;
            case 0x16C230u: goto label_16c230;
            case 0x16C23Cu: goto label_16c23c;
            case 0x16C258u: goto label_16c258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C284u;
}
