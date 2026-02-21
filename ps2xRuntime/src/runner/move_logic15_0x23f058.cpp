#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic15
// Address: 0x23f058 - 0x23f394
void move_logic15_0x23f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23f058u;

    // 0x23f058: 0x27bdff60
    ctx->pc = 0x23f058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23f05c: 0xffbf0080
    ctx->pc = 0x23f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23f060: 0xffb50070
    ctx->pc = 0x23f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x23f064: 0xffb40060
    ctx->pc = 0x23f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x23f068: 0xffb30050
    ctx->pc = 0x23f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x23f06c: 0xffb20040
    ctx->pc = 0x23f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23f070: 0xffb10030
    ctx->pc = 0x23f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23f074: 0xffb00020
    ctx->pc = 0x23f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23f078: 0xe7b40090
    ctx->pc = 0x23f078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23f07c: 0x80a02d
    ctx->pc = 0x23f07cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f080: 0x240303b0
    ctx->pc = 0x23f080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23f084: 0x2831818
    ctx->pc = 0x23f084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f088: 0x3c020033
    ctx->pc = 0x23f088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f08c: 0x2442dfd0
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23f090: 0xc08ed18
    ctx->pc = 0x23F090u;
    SET_GPR_U32(ctx, 31, 0x23F098u);
    ctx->pc = 0x23F094u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F098u; }
    }
    if (ctx->pc != 0x23F098u) { return; }
    ctx->pc = 0x23F098u;
    // 0x23f098: 0x10400006
    ctx->pc = 0x23F098u;
    {
        const bool branch_taken_0x23f098 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F09Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x23f098) {
            ctx->pc = 0x23F0B4u;
            goto label_23f0b4;
        }
    }
    ctx->pc = 0x23F0A0u;
    // 0x23f0a0: 0xa6020324
    ctx->pc = 0x23f0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f0a4: 0xc09095a
    ctx->pc = 0x23F0A4u;
    SET_GPR_U32(ctx, 31, 0x23F0ACu);
    ctx->pc = 0x23F0A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0ACu; }
    }
    if (ctx->pc != 0x23F0ACu) { return; }
    ctx->pc = 0x23F0ACu;
    // 0x23f0ac: 0x100000b0
    ctx->pc = 0x23F0ACu;
    {
        const bool branch_taken_0x23f0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F0B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x23f0ac) {
            ctx->pc = 0x23F370u;
            goto label_23f370;
        }
    }
    ctx->pc = 0x23F0B4u;
label_23f0b4:
    // 0x23f0b4: 0x86040288
    ctx->pc = 0x23f0b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23f0b8: 0x4800026
    ctx->pc = 0x23F0B8u;
    {
        const bool branch_taken_0x23f0b8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x23f0b8) {
            ctx->pc = 0x23F154u;
            goto label_23f154;
        }
    }
    ctx->pc = 0x23F0C0u;
    // 0x23f0c0: 0xc6000314
    ctx->pc = 0x23f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f0c4: 0x3c013f4c
    ctx->pc = 0x23f0c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23f0c8: 0x3421cccd
    ctx->pc = 0x23f0c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23f0cc: 0x4481a000
    ctx->pc = 0x23f0ccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x23f0d0: 0x46140002
    ctx->pc = 0x23f0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23f0d4: 0xc601028c
    ctx->pc = 0x23f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f0d8: 0x46000836
    ctx->pc = 0x23f0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f0dc: 0x0
    ctx->pc = 0x23f0dcu;
    // NOP
    // 0x23f0e0: 0x4500001c
    ctx->pc = 0x23F0E0u;
    {
        const bool branch_taken_0x23f0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F0E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x23f0e0) {
            ctx->pc = 0x23F154u;
            goto label_23f154;
        }
    }
    ctx->pc = 0x23F0E8u;
    // 0x23f0e8: 0x24631bc0
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x23f0ec: 0x24022b00
    ctx->pc = 0x23f0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23f0f0: 0x821018
    ctx->pc = 0x23f0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f0f4: 0x431021
    ctx->pc = 0x23f0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f0f8: 0xc44c0050
    ctx->pc = 0x23f0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f0fc: 0xc6000040
    ctx->pc = 0x23f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f100: 0x46006301
    ctx->pc = 0x23f100u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x23f104: 0xe7ac0010
    ctx->pc = 0x23f104u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23f108: 0xc4400054
    ctx->pc = 0x23f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f10c: 0xc6010044
    ctx->pc = 0x23f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f110: 0x46010001
    ctx->pc = 0x23f110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23f114: 0xe7a00014
    ctx->pc = 0x23f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23f118: 0xc44d0058
    ctx->pc = 0x23f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23f11c: 0xc6000048
    ctx->pc = 0x23f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f120: 0x46006b41
    ctx->pc = 0x23f120u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x23f124: 0xc0b5c34
    ctx->pc = 0x23F124u;
    SET_GPR_U32(ctx, 31, 0x23F12Cu);
    ctx->pc = 0x23F128u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F12Cu; }
    }
    if (ctx->pc != 0x23F12Cu) { return; }
    ctx->pc = 0x23F12Cu;
    // 0x23f12c: 0xc6010314
    ctx->pc = 0x23f12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f130: 0x46140842
    ctx->pc = 0x23f130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x23f134: 0x46010036
    ctx->pc = 0x23f134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f138: 0x45000006
    ctx->pc = 0x23F138u;
    {
        const bool branch_taken_0x23f138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f138) {
            ctx->pc = 0x23F154u;
            goto label_23f154;
        }
    }
    ctx->pc = 0x23F140u;
    // 0x23f140: 0xa6000324
    ctx->pc = 0x23f140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f144: 0xc09095a
    ctx->pc = 0x23F144u;
    SET_GPR_U32(ctx, 31, 0x23F14Cu);
    ctx->pc = 0x23F148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F14Cu; }
    }
    if (ctx->pc != 0x23F14Cu) { return; }
    ctx->pc = 0x23F14Cu;
    // 0x23f14c: 0x10000087
    ctx->pc = 0x23F14Cu;
    {
        const bool branch_taken_0x23f14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F150u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23f14c) {
            ctx->pc = 0x23F36Cu;
            goto label_23f36c;
        }
    }
    ctx->pc = 0x23F154u;
label_23f154:
    // 0x23f154: 0x40034800
    ctx->pc = 0x23f154u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f158: 0x3c02003a
    ctx->pc = 0x23f158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f15c: 0x8c4221d0
    ctx->pc = 0x23f15cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f160: 0xac430258
    ctx->pc = 0x23f160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 3));
    // 0x23f164: 0x86030324
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23f168: 0x86020328
    ctx->pc = 0x23f168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23f16c: 0x50620004
    ctx->pc = 0x23F16Cu;
    {
        const bool branch_taken_0x23f16c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23f16c) {
            ctx->pc = 0x23F170u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
            ctx->pc = 0x23F180u;
            goto label_23f180;
        }
    }
    ctx->pc = 0x23F174u;
    // 0x23f174: 0xc08e210
    ctx->pc = 0x23F174u;
    SET_GPR_U32(ctx, 31, 0x23F17Cu);
    ctx->pc = 0x23F178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F17Cu; }
    }
    if (ctx->pc != 0x23F17Cu) { return; }
    ctx->pc = 0x23F17Cu;
    // 0x23f17c: 0x8603032a
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
label_23f180:
    // 0x23f180: 0x10600005
    ctx->pc = 0x23F180u;
    {
        const bool branch_taken_0x23f180 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F184u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23f180) {
            ctx->pc = 0x23F198u;
            goto label_23f198;
        }
    }
    ctx->pc = 0x23F188u;
    // 0x23f188: 0x1062003e
    ctx->pc = 0x23F188u;
    {
        const bool branch_taken_0x23f188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23F18Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23f188) {
            ctx->pc = 0x23F284u;
            goto label_23f284;
        }
    }
    ctx->pc = 0x23F190u;
    // 0x23f190: 0x10000062
    ctx->pc = 0x23F190u;
    {
        const bool branch_taken_0x23f190 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23f190) {
            ctx->pc = 0x23F31Cu;
            goto label_23f31c;
        }
    }
    ctx->pc = 0x23F198u;
label_23f198:
    // 0x23f198: 0xc6000040
    ctx->pc = 0x23f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f19c: 0xe7a00000
    ctx->pc = 0x23f19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f1a0: 0xc6000044
    ctx->pc = 0x23f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f1a4: 0xe7a00004
    ctx->pc = 0x23f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f1a8: 0xc6000048
    ctx->pc = 0x23f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f1ac: 0xe7a00008
    ctx->pc = 0x23f1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f1b0: 0x2413ffff
    ctx->pc = 0x23f1b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f1b4: 0x3c0147c3
    ctx->pc = 0x23f1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x23f1b8: 0x34215000
    ctx->pc = 0x23f1b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x23f1bc: 0x4481a000
    ctx->pc = 0x23f1bcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x23f1c0: 0x3c020034
    ctx->pc = 0x23f1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23f1c4: 0x2452c390
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x23f1c8: 0x3c020034
    ctx->pc = 0x23f1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23f1cc: 0x8c42cd90
    ctx->pc = 0x23f1ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x23f1d0: 0x18400029
    ctx->pc = 0x23F1D0u;
    {
        const bool branch_taken_0x23f1d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F1D4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23f1d0) {
            ctx->pc = 0x23F278u;
            goto label_23f278;
        }
    }
    ctx->pc = 0x23F1D8u;
    // 0x23f1d8: 0x3c150034
    ctx->pc = 0x23f1d8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x23f1dc: 0x0
    ctx->pc = 0x23f1dcu;
    // NOP
label_23f1e0:
    // 0x23f1e0: 0x86420070
    ctx->pc = 0x23f1e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x23f1e4: 0x440001f
    ctx->pc = 0x23F1E4u;
    {
        const bool branch_taken_0x23f1e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F1E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23f1e4) {
            ctx->pc = 0x23F264u;
            goto label_23f264;
        }
    }
    ctx->pc = 0x23F1ECu;
    // 0x23f1ec: 0xc6430030
    ctx->pc = 0x23f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f1f0: 0x460018c1
    ctx->pc = 0x23f1f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x23f1f4: 0xe7a30010
    ctx->pc = 0x23f1f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23f1f8: 0xc6420034
    ctx->pc = 0x23f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f1fc: 0xc7a00004
    ctx->pc = 0x23f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f200: 0x46001081
    ctx->pc = 0x23f200u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23f204: 0xe7a20014
    ctx->pc = 0x23f204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23f208: 0xc6400038
    ctx->pc = 0x23f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f20c: 0xc7a10008
    ctx->pc = 0x23f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f210: 0x46010001
    ctx->pc = 0x23f210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23f214: 0xe7a00018
    ctx->pc = 0x23f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23f218: 0x460318c2
    ctx->pc = 0x23f218u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x23f21c: 0x46021082
    ctx->pc = 0x23f21cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23f220: 0x460218c0
    ctx->pc = 0x23f220u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x23f224: 0x46000002
    ctx->pc = 0x23f224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23f228: 0x46001b00
    ctx->pc = 0x23f228u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x23f22c: 0x0
    ctx->pc = 0x23f22cu;
    // NOP
    // 0x23f230: 0x0
    ctx->pc = 0x23f230u;
    // NOP
    // 0x23f234: 0x460c0004
    ctx->pc = 0x23f234u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x23f238: 0x46000032
    ctx->pc = 0x23f238u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f23c: 0x45010003
    ctx->pc = 0x23F23Cu;
    {
        const bool branch_taken_0x23f23c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f23c) {
            ctx->pc = 0x23F24Cu;
            goto label_23f24c;
        }
    }
    ctx->pc = 0x23F244u;
    // 0x23f244: 0xc0ba284
    ctx->pc = 0x23F244u;
    SET_GPR_U32(ctx, 31, 0x23F24Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F24Cu; }
    }
    if (ctx->pc != 0x23F24Cu) { return; }
    ctx->pc = 0x23F24Cu;
label_23f24c:
    // 0x23f24c: 0x46140034
    ctx->pc = 0x23f24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f250: 0x0
    ctx->pc = 0x23f250u;
    // NOP
    // 0x23f254: 0x45020004
    ctx->pc = 0x23F254u;
    {
        const bool branch_taken_0x23f254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f254) {
            ctx->pc = 0x23F258u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x23F268u;
            goto label_23f268;
        }
    }
    ctx->pc = 0x23F25Cu;
    // 0x23f25c: 0x46000506
    ctx->pc = 0x23f25cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23f260: 0x220982d
    ctx->pc = 0x23f260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f264:
    // 0x23f264: 0x26310001
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_23f268:
    // 0x23f268: 0x8ea2cd90
    ctx->pc = 0x23f268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294954384)));
    // 0x23f26c: 0x222102a
    ctx->pc = 0x23f26cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x23f270: 0x1440ffdb
    ctx->pc = 0x23F270u;
    {
        const bool branch_taken_0x23f270 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23F274u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x23f270) {
            ctx->pc = 0x23F1E0u;
            goto label_23f1e0;
        }
    }
    ctx->pc = 0x23F278u;
label_23f278:
    // 0x23f278: 0xae130330
    ctx->pc = 0x23f278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 19));
    // 0x23f27c: 0x24020001
    ctx->pc = 0x23f27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f280: 0xa602032a
    ctx->pc = 0x23f280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
label_23f284:
    // 0x23f284: 0x8e030330
    ctx->pc = 0x23f284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23f288: 0x319c0
    ctx->pc = 0x23f288u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 7));
    // 0x23f28c: 0x3c020034
    ctx->pc = 0x23f28cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23f290: 0x2442c390
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x23f294: 0x629021
    ctx->pc = 0x23f294u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f298: 0x26440030
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 48));
    // 0x23f29c: 0xc09a2aa
    ctx->pc = 0x23F29Cu;
    SET_GPR_U32(ctx, 31, 0x23F2A4u);
    ctx->pc = 0x23F2A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2A4u; }
    }
    if (ctx->pc != 0x23F2A4u) { return; }
    ctx->pc = 0x23F2A4u;
    // 0x23f2a4: 0xe6000260
    ctx->pc = 0x23f2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f2a8: 0xc6410030
    ctx->pc = 0x23f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f2ac: 0xc6000040
    ctx->pc = 0x23f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f2b0: 0x46000b01
    ctx->pc = 0x23f2b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f2b4: 0xe7ac0010
    ctx->pc = 0x23f2b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23f2b8: 0xc6410034
    ctx->pc = 0x23f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f2bc: 0xc6000044
    ctx->pc = 0x23f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f2c0: 0x46000841
    ctx->pc = 0x23f2c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f2c4: 0xe7a10014
    ctx->pc = 0x23f2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23f2c8: 0xc6420038
    ctx->pc = 0x23f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f2cc: 0xc6000048
    ctx->pc = 0x23f2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f2d0: 0x46001341
    ctx->pc = 0x23f2d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23f2d4: 0x46000845
    ctx->pc = 0x23f2d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x23f2d8: 0x3c014080
    ctx->pc = 0x23f2d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x23f2dc: 0x44810000
    ctx->pc = 0x23f2dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f2e0: 0x46000834
    ctx->pc = 0x23f2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f2e4: 0x0
    ctx->pc = 0x23f2e4u;
    // NOP
    // 0x23f2e8: 0x4500000b
    ctx->pc = 0x23F2E8u;
    {
        const bool branch_taken_0x23f2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F2ECu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x23f2e8) {
            ctx->pc = 0x23F318u;
            goto label_23f318;
        }
    }
    ctx->pc = 0x23F2F0u;
    // 0x23f2f0: 0xc0b5c34
    ctx->pc = 0x23F2F0u;
    SET_GPR_U32(ctx, 31, 0x23F2F8u);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2F8u; }
    }
    if (ctx->pc != 0x23F2F8u) { return; }
    ctx->pc = 0x23F2F8u;
    // 0x23f2f8: 0x3c013f80
    ctx->pc = 0x23f2f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23f2fc: 0x44810800
    ctx->pc = 0x23f2fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23f300: 0x46010034
    ctx->pc = 0x23f300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f304: 0x0
    ctx->pc = 0x23f304u;
    // NOP
    // 0x23f308: 0x45020004
    ctx->pc = 0x23F308u;
    {
        const bool branch_taken_0x23f308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f308) {
            ctx->pc = 0x23F30Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23F31Cu;
            goto label_23f31c;
        }
    }
    ctx->pc = 0x23F310u;
    // 0x23f310: 0x86420070
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x23f314: 0xae020330
    ctx->pc = 0x23f314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_23f318:
    // 0x23f318: 0x200202d
    ctx->pc = 0x23f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f31c:
    // 0x23f31c: 0x3c013f80
    ctx->pc = 0x23f31cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23f320: 0x44816000
    ctx->pc = 0x23f320u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23f324: 0xc08f14c
    ctx->pc = 0x23F324u;
    SET_GPR_U32(ctx, 31, 0x23F32Cu);
    ctx->pc = 0x23F328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F32Cu; }
    }
    if (ctx->pc != 0x23F32Cu) { return; }
    ctx->pc = 0x23F32Cu;
    // 0x23f32c: 0xc08f20c
    ctx->pc = 0x23F32Cu;
    SET_GPR_U32(ctx, 31, 0x23F334u);
    ctx->pc = 0x23F330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F334u; }
    }
    if (ctx->pc != 0x23F334u) { return; }
    ctx->pc = 0x23F334u;
    // 0x23f334: 0xe6000258
    ctx->pc = 0x23f334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23f338: 0xc090e82
    ctx->pc = 0x23F338u;
    SET_GPR_U32(ctx, 31, 0x23F340u);
    ctx->pc = 0x23F33Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F340u; }
    }
    if (ctx->pc != 0x23F340u) { return; }
    ctx->pc = 0x23F340u;
    // 0x23f340: 0x40034800
    ctx->pc = 0x23f340u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f344: 0x3c02003a
    ctx->pc = 0x23f344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f348: 0x8c4421d0
    ctx->pc = 0x23f348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f34c: 0x8c820258
    ctx->pc = 0x23f34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x23f350: 0x621823
    ctx->pc = 0x23f350u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f354: 0x8c820250
    ctx->pc = 0x23f354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x23f358: 0x621821
    ctx->pc = 0x23f358u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f35c: 0xac830250
    ctx->pc = 0x23f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x23f360: 0x8c820254
    ctx->pc = 0x23f360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x23f364: 0x24420001
    ctx->pc = 0x23f364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f368: 0xac820254
    ctx->pc = 0x23f368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
label_23f36c:
    // 0x23f36c: 0xdfbf0080
    ctx->pc = 0x23f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23f370:
    // 0x23f370: 0xdfb50070
    ctx->pc = 0x23f370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f374: 0xdfb40060
    ctx->pc = 0x23f374u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f378: 0xdfb30050
    ctx->pc = 0x23f378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f37c: 0xdfb20040
    ctx->pc = 0x23f37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f380: 0xdfb10030
    ctx->pc = 0x23f380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f384: 0xdfb00020
    ctx->pc = 0x23f384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f388: 0xc7b40090
    ctx->pc = 0x23f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f38c: 0x3e00008
    ctx->pc = 0x23F38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F390u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F0B4u: goto label_23f0b4;
            case 0x23F154u: goto label_23f154;
            case 0x23F180u: goto label_23f180;
            case 0x23F198u: goto label_23f198;
            case 0x23F1E0u: goto label_23f1e0;
            case 0x23F24Cu: goto label_23f24c;
            case 0x23F264u: goto label_23f264;
            case 0x23F268u: goto label_23f268;
            case 0x23F278u: goto label_23f278;
            case 0x23F284u: goto label_23f284;
            case 0x23F318u: goto label_23f318;
            case 0x23F31Cu: goto label_23f31c;
            case 0x23F36Cu: goto label_23f36c;
            case 0x23F370u: goto label_23f370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F394u;
}
