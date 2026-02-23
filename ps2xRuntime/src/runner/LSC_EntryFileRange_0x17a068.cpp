#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_EntryFileRange
// Address: 0x17a068 - 0x17a1c4
void LSC_EntryFileRange_0x17a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_EntryFileRange");


    ctx->pc = 0x17a068u;

    // 0x17a068: 0x27bdff80
    ctx->pc = 0x17a068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17a06c: 0xffb60060
    ctx->pc = 0x17a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x17a070: 0xffb50050
    ctx->pc = 0x17a070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x17a074: 0xc0b02d
    ctx->pc = 0x17a074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a078: 0xffb40040
    ctx->pc = 0x17a078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17a07c: 0x100a82d
    ctx->pc = 0x17a07cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a080: 0xffb20020
    ctx->pc = 0x17a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a084: 0xe0a02d
    ctx->pc = 0x17a084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a088: 0xffbf0070
    ctx->pc = 0x17a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17a08c: 0x80902d
    ctx->pc = 0x17a08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a090: 0xffb30030
    ctx->pc = 0x17a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17a094: 0xffb10010
    ctx->pc = 0x17a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17a098: 0x16400006
    ctx->pc = 0x17A098u;
    {
        const bool branch_taken_0x17a098 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A09Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x17a098) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x17A0A0u;
    // 0x17a0a0: 0x3c04002c
    ctx->pc = 0x17a0a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a0a4: 0xc05e9c6
    ctx->pc = 0x17A0A4u;
    SET_GPR_U32(ctx, 31, 0x17A0ACu);
    ctx->pc = 0x17A0A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0ACu; }
        else if (ctx->pc != 0x17A0ACu) { ctx->pc = 0x17A0ACu; }
    }
    if (ctx->pc != 0x17A0ACu) { return; }
    ctx->pc = 0x17A0ACu;
    // 0x17a0ac: 0x1000003b
    ctx->pc = 0x17A0ACu;
    {
        const bool branch_taken_0x17a0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A0B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a0ac) {
            ctx->pc = 0x17A19Cu;
            goto label_17a19c;
        }
    }
    ctx->pc = 0x17A0B4u;
label_17a0b4:
    // 0x17a0b4: 0x8e420024
    ctx->pc = 0x17a0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17a0b8: 0x28420010
    ctx->pc = 0x17a0b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x17a0bc: 0x10400037
    ctx->pc = 0x17A0BCu;
    {
        const bool branch_taken_0x17a0bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A0C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a0bc) {
            ctx->pc = 0x17A19Cu;
            goto label_17a19c;
        }
    }
    ctx->pc = 0x17A0C4u;
    // 0x17a0c4: 0x54a00007
    ctx->pc = 0x17A0C4u;
    {
        const bool branch_taken_0x17a0c4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a0c4) {
            ctx->pc = 0x17A0C8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x17A0E4u;
            goto label_17a0e4;
        }
    }
    ctx->pc = 0x17A0CCu;
    // 0x17a0cc: 0x3c04002c
    ctx->pc = 0x17a0ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a0d0: 0x282d
    ctx->pc = 0x17a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0d4: 0xc05e9c6
    ctx->pc = 0x17A0D4u;
    SET_GPR_U32(ctx, 31, 0x17A0DCu);
    ctx->pc = 0x17A0D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949520));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0DCu; }
        else if (ctx->pc != 0x17A0DCu) { ctx->pc = 0x17A0DCu; }
    }
    if (ctx->pc != 0x17A0DCu) { return; }
    ctx->pc = 0x17A0DCu;
    // 0x17a0dc: 0x1000002f
    ctx->pc = 0x17A0DCu;
    {
        const bool branch_taken_0x17a0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A0E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a0dc) {
            ctx->pc = 0x17A19Cu;
            goto label_17a19c;
        }
    }
    ctx->pc = 0x17A0E4u;
label_17a0e4:
    // 0x17a0e4: 0x2411ffff
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a0e8: 0x3c077fff
    ctx->pc = 0x17a0e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32767 << 16));
    // 0x17a0ec: 0x24060028
    ctx->pc = 0x17a0ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x17a0f0: 0x2604000f
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15));
    // 0x17a0f4: 0x2602001e
    ctx->pc = 0x17a0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 30));
    // 0x17a0f8: 0x224182a
    ctx->pc = 0x17a0f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x17a0fc: 0x108180
    ctx->pc = 0x17a0fcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 6));
    // 0x17a100: 0x83100b
    ctx->pc = 0x17a100u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x17a104: 0x34e7ffff
    ctx->pc = 0x17a104u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x17a108: 0x21103
    ctx->pc = 0x17a108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17a10c: 0x26100038
    ctx->pc = 0x17a10cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 56));
    // 0x17a110: 0x21100
    ctx->pc = 0x17a110u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a114: 0x2508021
    ctx->pc = 0x17a114u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x17a118: 0x821023
    ctx->pc = 0x17a118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17a11c: 0x21180
    ctx->pc = 0x17a11cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17a120: 0x26040004
    ctx->pc = 0x17a120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17a124: 0x2421021
    ctx->pc = 0x17a124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a128: 0x8c430038
    ctx->pc = 0x17a128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17a12c: 0x673826
    ctx->pc = 0x17a12cu;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17a130: 0x24730001
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a134: 0x7980a
    ctx->pc = 0x17a134u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x17a138: 0xc05167c
    ctx->pc = 0x17A138u;
    SET_GPR_U32(ctx, 31, 0x17A140u);
    ctx->pc = 0x17A13Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A140u; }
        else if (ctx->pc != 0x17A140u) { ctx->pc = 0x17A140u; }
    }
    if (ctx->pc != 0x17A140u) { return; }
    ctx->pc = 0x17A140u;
    // 0x17a140: 0xae140030
    ctx->pc = 0x17a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
    // 0x17a144: 0x24060001
    ctx->pc = 0x17a144u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a148: 0xae150034
    ctx->pc = 0x17a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 21));
    // 0x17a14c: 0xae00003c
    ctx->pc = 0x17a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17a150: 0xae000038
    ctx->pc = 0x17a150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17a154: 0xae16002c
    ctx->pc = 0x17a154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
    // 0x17a158: 0x8e42001c
    ctx->pc = 0x17a158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17a15c: 0x8e440024
    ctx->pc = 0x17a15cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17a160: 0x24430001
    ctx->pc = 0x17a160u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a164: 0x82450001
    ctx->pc = 0x17a164u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x17a168: 0x223882a
    ctx->pc = 0x17a168u;
    SET_GPR_U32(ctx, 17, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x17a16c: 0x24420010
    ctx->pc = 0x17a16cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a170: 0x71100b
    ctx->pc = 0x17a170u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x17a174: 0x24840001
    ctx->pc = 0x17a174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17a178: 0x21103
    ctx->pc = 0x17a178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17a17c: 0xae440024
    ctx->pc = 0x17a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x17a180: 0x21100
    ctx->pc = 0x17a180u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a184: 0x621823
    ctx->pc = 0x17a184u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a188: 0x14a60003
    ctx->pc = 0x17A188u;
    {
        const bool branch_taken_0x17a188 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x17A18Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x17a188) {
            ctx->pc = 0x17A198u;
            goto label_17a198;
        }
    }
    ctx->pc = 0x17A190u;
    // 0x17a190: 0x24020002
    ctx->pc = 0x17a190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a194: 0xa2420001
    ctx->pc = 0x17a194u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_17a198:
    // 0x17a198: 0x260102d
    ctx->pc = 0x17a198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a19c:
    // 0x17a19c: 0xdfbf0070
    ctx->pc = 0x17a19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a1a0: 0xdfb60060
    ctx->pc = 0x17a1a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a1a4: 0xdfb50050
    ctx->pc = 0x17a1a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a1a8: 0xdfb40040
    ctx->pc = 0x17a1a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a1ac: 0xdfb30030
    ctx->pc = 0x17a1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a1b0: 0xdfb20020
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a1b4: 0xdfb10010
    ctx->pc = 0x17a1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a1b8: 0xdfb00000
    ctx->pc = 0x17a1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a1bc: 0x3e00008
    ctx->pc = 0x17A1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A0B4u: goto label_17a0b4;
            case 0x17A0E4u: goto label_17a0e4;
            case 0x17A198u: goto label_17a198;
            case 0x17A19Cu: goto label_17a19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A1C4u;
}
