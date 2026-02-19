#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic01
// Address: 0x241fc0 - 0x242178
void move_logic01_0x241fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x241fc0u;

    // 0x241fc0: 0x27bdffc0
    ctx->pc = 0x241fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x241fc4: 0xffbf0030
    ctx->pc = 0x241fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241fc8: 0xffb20020
    ctx->pc = 0x241fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241fcc: 0xffb10010
    ctx->pc = 0x241fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241fd0: 0xffb00000
    ctx->pc = 0x241fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241fd4: 0x80882d
    ctx->pc = 0x241fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fd8: 0x240303b0
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x241fdc: 0x2231818
    ctx->pc = 0x241fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241fe0: 0x3c020033
    ctx->pc = 0x241fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x241fe4: 0x2442dfd0
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x241fe8: 0x628021
    ctx->pc = 0x241fe8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241fec: 0x8e02036c
    ctx->pc = 0x241fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x241ff0: 0xc08ed18
    ctx->pc = 0x241FF0u;
    SET_GPR_U32(ctx, 31, 0x241FF8u);
    ctx->pc = 0x241FF4u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241FF8u; }
    }
    if (ctx->pc != 0x241FF8u) { return; }
    ctx->pc = 0x241FF8u;
    // 0x241ff8: 0x5040000a
    ctx->pc = 0x241FF8u;
    {
        const bool branch_taken_0x241ff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x241ff8) {
            ctx->pc = 0x241FFCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
            ctx->pc = 0x242024u;
            goto label_242024;
        }
    }
    ctx->pc = 0x242000u;
    // 0x242000: 0x24020018
    ctx->pc = 0x242000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x242004: 0xa6020324
    ctx->pc = 0x242004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x242008: 0x220202d
    ctx->pc = 0x242008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24200c: 0xdfbf0030
    ctx->pc = 0x24200cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242010: 0xdfb20020
    ctx->pc = 0x242010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242014: 0xdfb10010
    ctx->pc = 0x242014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242018: 0xdfb00000
    ctx->pc = 0x242018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24201c: 0x809095a
    ctx->pc = 0x24201Cu;
    ctx->pc = 0x242020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x242024u;
label_242024:
    // 0x242024: 0x10400004
    ctx->pc = 0x242024u;
    {
        const bool branch_taken_0x242024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x242028u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x242024) {
            ctx->pc = 0x242038u;
            goto label_242038;
        }
    }
    ctx->pc = 0x24202Cu;
    // 0x24202c: 0x86020288
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x242030: 0x441000a
    ctx->pc = 0x242030u;
    {
        const bool branch_taken_0x242030 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x242034u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x242030) {
            ctx->pc = 0x24205Cu;
            goto label_24205c;
        }
    }
    ctx->pc = 0x242038u;
label_242038:
    // 0x242038: 0x24420005
    ctx->pc = 0x242038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x24203c: 0xa6020324
    ctx->pc = 0x24203cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x242040: 0x220202d
    ctx->pc = 0x242040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242044: 0xdfbf0030
    ctx->pc = 0x242044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242048: 0xdfb20020
    ctx->pc = 0x242048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24204c: 0xdfb10010
    ctx->pc = 0x24204cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242050: 0xdfb00000
    ctx->pc = 0x242050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242054: 0x809095a
    ctx->pc = 0x242054u;
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x24205Cu;
label_24205c:
    // 0x24205c: 0x40034800
    ctx->pc = 0x24205cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242060: 0x3c02003a
    ctx->pc = 0x242060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x242064: 0x8c4221d0
    ctx->pc = 0x242064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242068: 0xac430178
    ctx->pc = 0x242068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 3));
    // 0x24206c: 0x86030324
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x242070: 0x86020328
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x242074: 0x10620003
    ctx->pc = 0x242074u;
    {
        const bool branch_taken_0x242074 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x242074) {
            ctx->pc = 0x242084u;
            goto label_242084;
        }
    }
    ctx->pc = 0x24207Cu;
    // 0x24207c: 0xc08e210
    ctx->pc = 0x24207Cu;
    SET_GPR_U32(ctx, 31, 0x242084u);
    ctx->pc = 0x242080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242084u; }
    }
    if (ctx->pc != 0x242084u) { return; }
    ctx->pc = 0x242084u;
label_242084:
    // 0x242084: 0xc08f0d4
    ctx->pc = 0x242084u;
    SET_GPR_U32(ctx, 31, 0x24208Cu);
    ctx->pc = 0x242088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_target_ang_0x23c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24208Cu; }
    }
    if (ctx->pc != 0x24208Cu) { return; }
    ctx->pc = 0x24208Cu;
    // 0x24208c: 0xe6000260
    ctx->pc = 0x24208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x242090: 0x86030212
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x242094: 0x24020002
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x242098: 0x54620008
    ctx->pc = 0x242098u;
    {
        const bool branch_taken_0x242098 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x242098) {
            ctx->pc = 0x24209Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x2420BCu;
            goto label_2420bc;
        }
    }
    ctx->pc = 0x2420A0u;
    // 0x2420a0: 0x8e03036c
    ctx->pc = 0x2420a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2420a4: 0x18600011
    ctx->pc = 0x2420A4u;
    {
        const bool branch_taken_0x2420a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2420A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2420a4) {
            ctx->pc = 0x2420ECu;
            goto label_2420ec;
        }
    }
    ctx->pc = 0x2420ACu;
    // 0x2420ac: 0x8c42ffbc
    ctx->pc = 0x2420acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2420b0: 0x621023
    ctx->pc = 0x2420b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2420b4: 0xae02036c
    ctx->pc = 0x2420b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
    // 0x2420b8: 0x8e02036c
    ctx->pc = 0x2420b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2420bc:
    // 0x2420bc: 0x5840000c
    ctx->pc = 0x2420BCu;
    {
        const bool branch_taken_0x2420bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2420bc) {
            ctx->pc = 0x2420C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x2420F0u;
            goto label_2420f0;
        }
    }
    ctx->pc = 0x2420C4u;
    // 0x2420c4: 0xc6000260
    ctx->pc = 0x2420c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2420c8: 0xc6010268
    ctx->pc = 0x2420c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2420cc: 0x46010001
    ctx->pc = 0x2420ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2420d0: 0x46000005
    ctx->pc = 0x2420d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2420d4: 0x3c013dd6
    ctx->pc = 0x2420d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15830 << 16));
    // 0x2420d8: 0x34217750
    ctx->pc = 0x2420d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
    // 0x2420dc: 0x44810800
    ctx->pc = 0x2420dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2420e0: 0x46000836
    ctx->pc = 0x2420e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2420e4: 0x45000007
    ctx->pc = 0x2420E4u;
    {
        const bool branch_taken_0x2420e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2420e4) {
            ctx->pc = 0x242104u;
            goto label_242104;
        }
    }
    ctx->pc = 0x2420ECu;
label_2420ec:
    // 0x2420ec: 0xae00036c
    ctx->pc = 0x2420ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_2420f0:
    // 0x2420f0: 0x200202d
    ctx->pc = 0x2420f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420f4: 0x3c013f80
    ctx->pc = 0x2420f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2420f8: 0x44816000
    ctx->pc = 0x2420f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2420fc: 0xc08f14c
    ctx->pc = 0x2420FCu;
    SET_GPR_U32(ctx, 31, 0x242104u);
    ctx->pc = 0x242100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242104u; }
    }
    if (ctx->pc != 0x242104u) { return; }
    ctx->pc = 0x242104u;
label_242104:
    // 0x242104: 0xc08f20c
    ctx->pc = 0x242104u;
    SET_GPR_U32(ctx, 31, 0x24210Cu);
    ctx->pc = 0x242108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24210Cu; }
    }
    if (ctx->pc != 0x24210Cu) { return; }
    ctx->pc = 0x24210Cu;
    // 0x24210c: 0xe6000258
    ctx->pc = 0x24210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x242110: 0xc090e82
    ctx->pc = 0x242110u;
    SET_GPR_U32(ctx, 31, 0x242118u);
    ctx->pc = 0x242114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242118u; }
    }
    if (ctx->pc != 0x242118u) { return; }
    ctx->pc = 0x242118u;
    // 0x242118: 0x16400006
    ctx->pc = 0x242118u;
    {
        const bool branch_taken_0x242118 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x242118) {
            ctx->pc = 0x242134u;
            goto label_242134;
        }
    }
    ctx->pc = 0x242120u;
    // 0x242120: 0x8e02036c
    ctx->pc = 0x242120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x242124: 0x18400003
    ctx->pc = 0x242124u;
    {
        const bool branch_taken_0x242124 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x242124) {
            ctx->pc = 0x242134u;
            goto label_242134;
        }
    }
    ctx->pc = 0x24212Cu;
    // 0x24212c: 0xc6000260
    ctx->pc = 0x24212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242130: 0xe6000268
    ctx->pc = 0x242130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_242134:
    // 0x242134: 0x40034800
    ctx->pc = 0x242134u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242138: 0x3c02003a
    ctx->pc = 0x242138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24213c: 0x8c4421d0
    ctx->pc = 0x24213cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242140: 0x8c820178
    ctx->pc = 0x242140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x242144: 0x621823
    ctx->pc = 0x242144u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242148: 0x8c820170
    ctx->pc = 0x242148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x24214c: 0x621821
    ctx->pc = 0x24214cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242150: 0xac830170
    ctx->pc = 0x242150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 3));
    // 0x242154: 0x8c820174
    ctx->pc = 0x242154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x242158: 0x24420001
    ctx->pc = 0x242158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x24215c: 0xac820174
    ctx->pc = 0x24215cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242160: 0xdfbf0030
    ctx->pc = 0x242160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242164: 0xdfb20020
    ctx->pc = 0x242164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242168: 0xdfb10010
    ctx->pc = 0x242168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24216c: 0xdfb00000
    ctx->pc = 0x24216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242170: 0x3e00008
    ctx->pc = 0x242170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242024u: goto label_242024;
            case 0x242038u: goto label_242038;
            case 0x24205Cu: goto label_24205c;
            case 0x242084u: goto label_242084;
            case 0x2420BCu: goto label_2420bc;
            case 0x2420ECu: goto label_2420ec;
            case 0x2420F0u: goto label_2420f0;
            case 0x242104u: goto label_242104;
            case 0x242134u: goto label_242134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242178u;
}
