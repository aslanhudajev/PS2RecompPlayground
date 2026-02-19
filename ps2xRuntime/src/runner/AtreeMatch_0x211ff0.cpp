#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeMatch
// Address: 0x211ff0 - 0x2120c4
void AtreeMatch_0x211ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211ff0u;

    // 0x211ff0: 0x27bdff80
    ctx->pc = 0x211ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x211ff4: 0xffbf0070
    ctx->pc = 0x211ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x211ff8: 0xffb60060
    ctx->pc = 0x211ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x211ffc: 0xffb50050
    ctx->pc = 0x211ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x212000: 0xffb40040
    ctx->pc = 0x212000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x212004: 0xffb30030
    ctx->pc = 0x212004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212008: 0xffb20020
    ctx->pc = 0x212008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21200c: 0xffb10010
    ctx->pc = 0x21200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212010: 0xffb00000
    ctx->pc = 0x212010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212014: 0x80902d
    ctx->pc = 0x212014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212018: 0xa0982d
    ctx->pc = 0x212018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21201c: 0x16400006
    ctx->pc = 0x21201Cu;
    {
        const bool branch_taken_0x21201c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x212020u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21201c) {
            ctx->pc = 0x212038u;
            goto label_212038;
        }
    }
    ctx->pc = 0x212024u;
    // 0x212024: 0x3c04003a
    ctx->pc = 0x212024u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x212028: 0x24845a08
    ctx->pc = 0x212028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23048));
    // 0x21202c: 0x3c050080
    ctx->pc = 0x21202cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x212030: 0xc0b49a6
    ctx->pc = 0x212030u;
    SET_GPR_U32(ctx, 31, 0x212038u);
    ctx->pc = 0x212034u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212038u; }
    }
    if (ctx->pc != 0x212038u) { return; }
    ctx->pc = 0x212038u;
label_212038:
    // 0x212038: 0x8e540004
    ctx->pc = 0x212038u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21203c: 0x86420000
    ctx->pc = 0x21203cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212040: 0x18400010
    ctx->pc = 0x212040u;
    {
        const bool branch_taken_0x212040 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212044u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212040) {
            ctx->pc = 0x212084u;
            goto label_212084;
        }
    }
    ctx->pc = 0x212048u;
    // 0x212048: 0x24150024
    ctx->pc = 0x212048u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 36));
    // 0x21204c: 0x2351018
    ctx->pc = 0x21204cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_212050:
    // 0x212050: 0x548021
    ctx->pc = 0x212050u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x212054: 0x260202d
    ctx->pc = 0x212054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212058: 0xc0bf270
    ctx->pc = 0x212058u;
    SET_GPR_U32(ctx, 31, 0x212060u);
    ctx->pc = 0x21205Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212060u; }
    }
    if (ctx->pc != 0x212060u) { return; }
    ctx->pc = 0x212060u;
    // 0x212060: 0x14400004
    ctx->pc = 0x212060u;
    {
        const bool branch_taken_0x212060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212064u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x212060) {
            ctx->pc = 0x212074u;
            goto label_212074;
        }
    }
    ctx->pc = 0x212068u;
    // 0x212068: 0x8e020020
    ctx->pc = 0x212068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21206c: 0x1000000b
    ctx->pc = 0x21206Cu;
    {
        const bool branch_taken_0x21206c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212070u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x21206c) {
            ctx->pc = 0x21209Cu;
            goto label_21209c;
        }
    }
    ctx->pc = 0x212074u;
label_212074:
    // 0x212074: 0x86420000
    ctx->pc = 0x212074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212078: 0x222102a
    ctx->pc = 0x212078u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x21207c: 0x1440fff4
    ctx->pc = 0x21207Cu;
    {
        const bool branch_taken_0x21207c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212080u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21207c) {
            ctx->pc = 0x212050u;
            goto label_212050;
        }
    }
    ctx->pc = 0x212084u;
label_212084:
    // 0x212084: 0x12c00004
    ctx->pc = 0x212084u;
    {
        const bool branch_taken_0x212084 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x212088u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x212084) {
            ctx->pc = 0x212098u;
            goto label_212098;
        }
    }
    ctx->pc = 0x21208Cu;
    // 0x21208c: 0x24845a28
    ctx->pc = 0x21208cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23080));
    // 0x212090: 0xc0b492e
    ctx->pc = 0x212090u;
    SET_GPR_U32(ctx, 31, 0x212098u);
    ctx->pc = 0x212094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212098u; }
    }
    if (ctx->pc != 0x212098u) { return; }
    ctx->pc = 0x212098u;
label_212098:
    // 0x212098: 0x102d
    ctx->pc = 0x212098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21209c:
    // 0x21209c: 0xdfbf0070
    ctx->pc = 0x21209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2120a0: 0xdfb60060
    ctx->pc = 0x2120a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2120a4: 0xdfb50050
    ctx->pc = 0x2120a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2120a8: 0xdfb40040
    ctx->pc = 0x2120a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2120ac: 0xdfb30030
    ctx->pc = 0x2120acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2120b0: 0xdfb20020
    ctx->pc = 0x2120b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2120b4: 0xdfb10010
    ctx->pc = 0x2120b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2120b8: 0xdfb00000
    ctx->pc = 0x2120b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120bc: 0x3e00008
    ctx->pc = 0x2120BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2120C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212038u: goto label_212038;
            case 0x212050u: goto label_212050;
            case 0x212074u: goto label_212074;
            case 0x212084u: goto label_212084;
            case 0x212098u: goto label_212098;
            case 0x21209Cu: goto label_21209c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2120C4u;
}
