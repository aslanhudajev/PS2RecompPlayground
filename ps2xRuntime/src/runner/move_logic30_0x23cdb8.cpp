#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic30
// Address: 0x23cdb8 - 0x23cfb8
void move_logic30_0x23cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23cdb8u;

    // 0x23cdb8: 0x27bdffc0
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23cdbc: 0xffbf0030
    ctx->pc = 0x23cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23cdc0: 0xffb20020
    ctx->pc = 0x23cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23cdc4: 0xffb10010
    ctx->pc = 0x23cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23cdc8: 0xffb00000
    ctx->pc = 0x23cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cdcc: 0x80902d
    ctx->pc = 0x23cdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdd0: 0x240303b0
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23cdd4: 0x2431818
    ctx->pc = 0x23cdd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23cdd8: 0x3c020033
    ctx->pc = 0x23cdd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23cddc: 0x2442dfd0
    ctx->pc = 0x23cddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23cde0: 0xc08ed18
    ctx->pc = 0x23CDE0u;
    SET_GPR_U32(ctx, 31, 0x23CDE8u);
    ctx->pc = 0x23CDE4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CDE8u; }
    }
    if (ctx->pc != 0x23CDE8u) { return; }
    ctx->pc = 0x23CDE8u;
    // 0x23cde8: 0x5040000a
    ctx->pc = 0x23CDE8u;
    {
        const bool branch_taken_0x23cde8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cde8) {
            ctx->pc = 0x23CDECu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
            ctx->pc = 0x23CE14u;
            goto label_23ce14;
        }
    }
    ctx->pc = 0x23CDF0u;
    // 0x23cdf0: 0x24020018
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23cdf4: 0xa6220324
    ctx->pc = 0x23cdf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23cdf8: 0x240202d
    ctx->pc = 0x23cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdfc: 0xdfbf0030
    ctx->pc = 0x23cdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ce00: 0xdfb20020
    ctx->pc = 0x23ce00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ce04: 0xdfb10010
    ctx->pc = 0x23ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce08: 0xdfb00000
    ctx->pc = 0x23ce08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce0c: 0x809095a
    ctx->pc = 0x23CE0Cu;
    ctx->pc = 0x23CE10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23CE14u;
label_23ce14:
    // 0x23ce14: 0x10400005
    ctx->pc = 0x23CE14u;
    {
        const bool branch_taken_0x23ce14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CE18u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23ce14) {
            ctx->pc = 0x23CE2Cu;
            goto label_23ce2c;
        }
    }
    ctx->pc = 0x23CE1Cu;
    // 0x23ce1c: 0x86220288
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x23ce20: 0x443000b
    ctx->pc = 0x23CE20u;
    {
        const bool branch_taken_0x23ce20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23ce20) {
            ctx->pc = 0x23CE24u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23CE50u;
            goto label_23ce50;
        }
    }
    ctx->pc = 0x23CE28u;
    // 0x23ce28: 0x32420001
    ctx->pc = 0x23ce28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
label_23ce2c:
    // 0x23ce2c: 0x24420005
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23ce30: 0xa6220324
    ctx->pc = 0x23ce30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ce34: 0x240202d
    ctx->pc = 0x23ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce38: 0xdfbf0030
    ctx->pc = 0x23ce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ce3c: 0xdfb20020
    ctx->pc = 0x23ce3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ce40: 0xdfb10010
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce44: 0xdfb00000
    ctx->pc = 0x23ce44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce48: 0x809095a
    ctx->pc = 0x23CE48u;
    ctx->pc = 0x23CE4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23CE50u;
label_23ce50:
    // 0x23ce50: 0x3c0140c0
    ctx->pc = 0x23ce50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x23ce54: 0x44810000
    ctx->pc = 0x23ce54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ce58: 0x46000836
    ctx->pc = 0x23ce58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce5c: 0x0
    ctx->pc = 0x23ce5cu;
    // NOP
    // 0x23ce60: 0x45000009
    ctx->pc = 0x23CE60u;
    {
        const bool branch_taken_0x23ce60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CE64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23ce60) {
            ctx->pc = 0x23CE88u;
            goto label_23ce88;
        }
    }
    ctx->pc = 0x23CE68u;
    // 0x23ce68: 0xa6220324
    ctx->pc = 0x23ce68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ce6c: 0x240202d
    ctx->pc = 0x23ce6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce70: 0xdfbf0030
    ctx->pc = 0x23ce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ce74: 0xdfb20020
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ce78: 0xdfb10010
    ctx->pc = 0x23ce78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce7c: 0xdfb00000
    ctx->pc = 0x23ce7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce80: 0x809095a
    ctx->pc = 0x23CE80u;
    ctx->pc = 0x23CE84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23CE88u;
label_23ce88:
    // 0x23ce88: 0x40034800
    ctx->pc = 0x23ce88u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23ce8c: 0x3c02003a
    ctx->pc = 0x23ce8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23ce90: 0x8c4221d0
    ctx->pc = 0x23ce90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23ce94: 0xac430348
    ctx->pc = 0x23ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 3));
    // 0x23ce98: 0x86230324
    ctx->pc = 0x23ce98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x23ce9c: 0x86220328
    ctx->pc = 0x23ce9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x23cea0: 0x50620004
    ctx->pc = 0x23CEA0u;
    {
        const bool branch_taken_0x23cea0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23cea0) {
            ctx->pc = 0x23CEA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->pc = 0x23CEB4u;
            goto label_23ceb4;
        }
    }
    ctx->pc = 0x23CEA8u;
    // 0x23cea8: 0xc08e210
    ctx->pc = 0x23CEA8u;
    SET_GPR_U32(ctx, 31, 0x23CEB0u);
    ctx->pc = 0x23CEACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEB0u; }
    }
    if (ctx->pc != 0x23CEB0u) { return; }
    ctx->pc = 0x23CEB0u;
    // 0x23ceb0: 0x8e22036c
    ctx->pc = 0x23ceb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23ceb4:
    // 0x23ceb4: 0x5c40001e
    ctx->pc = 0x23CEB4u;
    {
        const bool branch_taken_0x23ceb4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23ceb4) {
            ctx->pc = 0x23CEB8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->pc = 0x23CF30u;
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CEBCu;
    // 0x23cebc: 0x3c020031
    ctx->pc = 0x23cebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23cec0: 0x8e230338
    ctx->pc = 0x23cec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x23cec4: 0x8c42ffbc
    ctx->pc = 0x23cec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23cec8: 0x621823
    ctx->pc = 0x23cec8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cecc: 0x1c600014
    ctx->pc = 0x23CECCu;
    {
        const bool branch_taken_0x23cecc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23CED0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 3));
        if (branch_taken_0x23cecc) {
            ctx->pc = 0x23CF20u;
            goto label_23cf20;
        }
    }
    ctx->pc = 0x23CED4u;
    // 0x23ced4: 0x3c020034
    ctx->pc = 0x23ced4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23ced8: 0x8c42e7c8
    ctx->pc = 0x23ced8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x23cedc: 0xc44000c0
    ctx->pc = 0x23cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cee0: 0x3c0142b4
    ctx->pc = 0x23cee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17076 << 16));
    // 0x23cee4: 0x44810800
    ctx->pc = 0x23cee4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23cee8: 0x46010002
    ctx->pc = 0x23cee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23ceec: 0x46000064
    ctx->pc = 0x23ceecu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x23cef0: 0x44100800
    ctx->pc = 0x23cef0u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x23cef4: 0xc0b5c24
    ctx->pc = 0x23CEF4u;
    SET_GPR_U32(ctx, 31, 0x23CEFCu);
    ctx->pc = 0x23CEF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEFCu; }
    }
    if (ctx->pc != 0x23CEFCu) { return; }
    ctx->pc = 0x23CEFCu;
    // 0x23cefc: 0x240202d
    ctx->pc = 0x23cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf00: 0xc08efc2
    ctx->pc = 0x23CF00u;
    SET_GPR_U32(ctx, 31, 0x23CF08u);
    ctx->pc = 0x23CF04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF08u; }
    }
    if (ctx->pc != 0x23CF08u) { return; }
    ctx->pc = 0x23CF08u;
    // 0x23cf08: 0xc0b5c24
    ctx->pc = 0x23CF08u;
    SET_GPR_U32(ctx, 31, 0x23CF10u);
    ctx->pc = 0x23CF0Cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF10u; }
    }
    if (ctx->pc != 0x23CF10u) { return; }
    ctx->pc = 0x23CF10u;
    // 0x23cf10: 0x8e23036c
    ctx->pc = 0x23cf10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x23cf14: 0x431021
    ctx->pc = 0x23cf14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cf18: 0x501021
    ctx->pc = 0x23cf18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23cf1c: 0xae220338
    ctx->pc = 0x23cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_23cf20:
    // 0x23cf20: 0x8e22036c
    ctx->pc = 0x23cf20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x23cf24: 0x5840000f
    ctx->pc = 0x23CF24u;
    {
        const bool branch_taken_0x23cf24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23cf24) {
            ctx->pc = 0x23CF28u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23CF64u;
            goto label_23cf64;
        }
    }
    ctx->pc = 0x23CF2Cu;
    // 0x23cf2c: 0x862202f0
    ctx->pc = 0x23cf2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 752)));
label_23cf30:
    // 0x23cf30: 0x5040000c
    ctx->pc = 0x23CF30u;
    {
        const bool branch_taken_0x23cf30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cf30) {
            ctx->pc = 0x23CF34u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23CF64u;
            goto label_23cf64;
        }
    }
    ctx->pc = 0x23CF38u;
    // 0x23cf38: 0x8622021a
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x23cf3c: 0x28420002
    ctx->pc = 0x23cf3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23cf40: 0x14400005
    ctx->pc = 0x23CF40u;
    {
        const bool branch_taken_0x23cf40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23CF44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23cf40) {
            ctx->pc = 0x23CF58u;
            goto label_23cf58;
        }
    }
    ctx->pc = 0x23CF48u;
    // 0x23cf48: 0xc09de18
    ctx->pc = 0x23CF48u;
    SET_GPR_U32(ctx, 31, 0x23CF50u);
    ctx->pc = 0x23CF4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF50u; }
    }
    if (ctx->pc != 0x23CF50u) { return; }
    ctx->pc = 0x23CF50u;
    // 0x23cf50: 0x10000004
    ctx->pc = 0x23CF50u;
    {
        const bool branch_taken_0x23cf50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CF54u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23cf50) {
            ctx->pc = 0x23CF64u;
            goto label_23cf64;
        }
    }
    ctx->pc = 0x23CF58u;
label_23cf58:
    // 0x23cf58: 0xc09de18
    ctx->pc = 0x23CF58u;
    SET_GPR_U32(ctx, 31, 0x23CF60u);
    ctx->pc = 0x23CF5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF60u; }
    }
    if (ctx->pc != 0x23CF60u) { return; }
    ctx->pc = 0x23CF60u;
    // 0x23cf60: 0xa6200324
    ctx->pc = 0x23cf60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 0));
label_23cf64:
    // 0x23cf64: 0xc09085e
    ctx->pc = 0x23CF64u;
    SET_GPR_U32(ctx, 31, 0x23CF6Cu);
    ctx->pc = 0x23CF68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242178u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic00_0x242178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF6Cu; }
    }
    if (ctx->pc != 0x23CF6Cu) { return; }
    ctx->pc = 0x23CF6Cu;
    // 0x23cf6c: 0x2402001e
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x23cf70: 0xa6220324
    ctx->pc = 0x23cf70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23cf74: 0x40034800
    ctx->pc = 0x23cf74u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23cf78: 0x3c02003a
    ctx->pc = 0x23cf78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23cf7c: 0x8c4421d0
    ctx->pc = 0x23cf7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23cf80: 0x8c820348
    ctx->pc = 0x23cf80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x23cf84: 0x621823
    ctx->pc = 0x23cf84u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf88: 0x8c820340
    ctx->pc = 0x23cf88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x23cf8c: 0x621821
    ctx->pc = 0x23cf8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf90: 0xac830340
    ctx->pc = 0x23cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 3));
    // 0x23cf94: 0x8c820344
    ctx->pc = 0x23cf94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x23cf98: 0x24420001
    ctx->pc = 0x23cf98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cf9c: 0xac820344
    ctx->pc = 0x23cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 2));
    // 0x23cfa0: 0xdfbf0030
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cfa4: 0xdfb20020
    ctx->pc = 0x23cfa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cfa8: 0xdfb10010
    ctx->pc = 0x23cfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cfac: 0xdfb00000
    ctx->pc = 0x23cfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cfb0: 0x3e00008
    ctx->pc = 0x23CFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CE14u: goto label_23ce14;
            case 0x23CE2Cu: goto label_23ce2c;
            case 0x23CE50u: goto label_23ce50;
            case 0x23CE88u: goto label_23ce88;
            case 0x23CEB4u: goto label_23ceb4;
            case 0x23CF20u: goto label_23cf20;
            case 0x23CF30u: goto label_23cf30;
            case 0x23CF58u: goto label_23cf58;
            case 0x23CF64u: goto label_23cf64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CFB8u;
}
