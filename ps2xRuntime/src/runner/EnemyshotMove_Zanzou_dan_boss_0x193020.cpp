#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Zanzou_dan_boss
// Address: 0x193020 - 0x193364
void EnemyshotMove_Zanzou_dan_boss_0x193020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Zanzou_dan_boss_0x193020");
#endif

    ctx->pc = 0x193020u;

    // 0x193020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19302c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193030: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193034: 0x286100b4  slti        $at, $v1, 0xB4
    ctx->pc = 0x193034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x193038: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x193038u;
    {
        const bool branch_taken_0x193038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193038u;
            // 0x19303c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193038) {
            ctx->pc = 0x1930B8u;
            goto label_1930b8;
        }
    }
    ctx->pc = 0x193040u;
    // 0x193040: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193044: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193048: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19304c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19304cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193050: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x193050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x193054: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193058: 0xc065404  jal         func_195010
    ctx->pc = 0x193058u;
    SET_GPR_U32(ctx, 31, 0x193060u);
    ctx->pc = 0x195010u;
    if (runtime->hasFunction(0x195010u)) {
        auto targetFn = runtime->lookupFunction(0x195010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Ryushi_0x195010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    }
    ctx->pc = 0x193060u;
    // 0x193060: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193064: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193068: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19306c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19306cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193070: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x193070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x193074: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193078: 0xc0653b8  jal         func_194EE0
    ctx->pc = 0x193078u;
    SET_GPR_U32(ctx, 31, 0x193080u);
    ctx->pc = 0x194EE0u;
    if (runtime->hasFunction(0x194EE0u)) {
        auto targetFn = runtime->lookupFunction(0x194EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193080u; }
        if (ctx->pc != 0x193080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Ryushi_Chibi_0x194ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193080u; }
        if (ctx->pc != 0x193080u) { return; }
    }
    ctx->pc = 0x193080u;
    // 0x193080: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193084: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x193084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x193088: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x193088u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19308c: 0x0  nop
    ctx->pc = 0x19308cu;
    // NOP
    // 0x193090: 0x0  nop
    ctx->pc = 0x193090u;
    // NOP
    // 0x193094: 0x1010  mfhi        $v0
    ctx->pc = 0x193094u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x193098: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x193098u;
    {
        const bool branch_taken_0x193098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193098) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x1930A0u;
    // 0x1930a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1930a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1930a4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1930a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1930a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1930A8u;
    SET_GPR_U32(ctx, 31, 0x1930B0u);
    ctx->pc = 0x1930ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1930A8u;
            // 0x1930ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930B0u; }
        if (ctx->pc != 0x1930B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930B0u; }
        if (ctx->pc != 0x1930B0u) { return; }
    }
    ctx->pc = 0x1930B0u;
    // 0x1930b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x1930B8u;
label_1930b8:
    // 0x1930b8: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1930b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1930bc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1930BCu;
    {
        const bool branch_taken_0x1930bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1930bc) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x1930C4u;
    // 0x1930c4: 0xc0656a4  jal         func_195A90
    ctx->pc = 0x1930C4u;
    SET_GPR_U32(ctx, 31, 0x1930CCu);
    ctx->pc = 0x195A90u;
    if (runtime->hasFunction(0x195A90u)) {
        auto targetFn = runtime->lookupFunction(0x195A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930CCu; }
        if (ctx->pc != 0x1930CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastFire_0x195a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930CCu; }
        if (ctx->pc != 0x1930CCu) { return; }
    }
    ctx->pc = 0x1930CCu;
    // 0x1930cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1930ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1930d0:
    // 0x1930d0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1930d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1930d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1930d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1930d8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1930D8u;
    SET_GPR_U32(ctx, 31, 0x1930E0u);
    ctx->pc = 0x1930DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1930D8u;
            // 0x1930dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930E0u; }
        if (ctx->pc != 0x1930E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930E0u; }
        if (ctx->pc != 0x1930E0u) { return; }
    }
    ctx->pc = 0x1930E0u;
    // 0x1930e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1930e4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1930e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1930e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1930E8u;
    {
        const bool branch_taken_0x1930e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1930e8) {
            ctx->pc = 0x1930D0u;
            goto label_1930d0;
        }
    }
    ctx->pc = 0x1930F0u;
    // 0x1930f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1930F0u;
    {
        const bool branch_taken_0x1930f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930f0) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x1930F8u;
label_1930f8:
    // 0x1930f8: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1930f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1930fc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1930FCu;
    {
        const bool branch_taken_0x1930fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930FCu;
            // 0x193100: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930fc) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x193104u;
    // 0x193104: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x193108: 0xc4223528  lwc1        $f2, 0x3528($at)
    ctx->pc = 0x193108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19310c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193110: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193114: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x193118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x193118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19311c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x19311cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x193120: 0xc420352c  lwc1        $f0, 0x352C($at)
    ctx->pc = 0x193120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193124: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x193124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x193128: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x193128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19312c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193134: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193138: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x193138u;
    SET_GPR_U32(ctx, 31, 0x193140u);
    ctx->pc = 0x19313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193138u;
            // 0x19313c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193140u; }
        if (ctx->pc != 0x193140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193140u; }
        if (ctx->pc != 0x193140u) { return; }
    }
    ctx->pc = 0x193140u;
    // 0x193140: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x193144: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x193148: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x193148u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19314c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19314cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193150: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x193150u;
    SET_GPR_U32(ctx, 31, 0x193158u);
    ctx->pc = 0x193154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193150u;
            // 0x193154: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193158u; }
        if (ctx->pc != 0x193158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193158u; }
        if (ctx->pc != 0x193158u) { return; }
    }
    ctx->pc = 0x193158u;
    // 0x193158: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x193158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19315c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193160: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193164: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x193164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x193168: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19316c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x19316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193174: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x193174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_193178:
    // 0x193178: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x193178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19317c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193184: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x193184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x193188: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19318c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193194: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x193194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x193198: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19319c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1931a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1931a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1931a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1931a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1931a8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1931a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1931ac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1931acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1931b0: 0xc065450  jal         func_195140
    ctx->pc = 0x1931B0u;
    SET_GPR_U32(ctx, 31, 0x1931B8u);
    ctx->pc = 0x195140u;
    if (runtime->hasFunction(0x195140u)) {
        auto targetFn = runtime->lookupFunction(0x195140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931B8u; }
        if (ctx->pc != 0x1931B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzou_0x195140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931B8u; }
        if (ctx->pc != 0x1931B8u) { return; }
    }
    ctx->pc = 0x1931B8u;
    // 0x1931b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1931bc: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1931bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1931c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1931c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1931c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1931c8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1931c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1931cc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1931ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1931d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1931d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1931d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1931D4u;
    {
        const bool branch_taken_0x1931d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1931D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1931D4u;
            // 0x1931d8: 0x3c024370  lui         $v0, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931d4) {
            ctx->pc = 0x193220u;
            goto label_193220;
        }
    }
    ctx->pc = 0x1931DCu;
    // 0x1931dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1931dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1931e0: 0x0  nop
    ctx->pc = 0x1931e0u;
    // NOP
    // 0x1931e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1931e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1931e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1931E8u;
    {
        const bool branch_taken_0x1931e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1931e8) {
            ctx->pc = 0x193220u;
            goto label_193220;
        }
    }
    ctx->pc = 0x1931F0u;
    // 0x1931f0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1931f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1931f4: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x1931f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1931f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1931fc: 0x0  nop
    ctx->pc = 0x1931fcu;
    // NOP
    // 0x193200: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193204: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x193204u;
    {
        const bool branch_taken_0x193204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193204u;
            // 0x193208: 0x3c0243a0  lui         $v0, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193204) {
            ctx->pc = 0x193220u;
            goto label_193220;
        }
    }
    ctx->pc = 0x19320Cu;
    // 0x19320c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19320cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193210: 0x0  nop
    ctx->pc = 0x193210u;
    // NOP
    // 0x193214: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x193214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193218: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x193218u;
    {
        const bool branch_taken_0x193218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193218) {
            ctx->pc = 0x193230u;
            goto label_193230;
        }
    }
    ctx->pc = 0x193220u;
label_193220:
    // 0x193220: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193220u;
    SET_GPR_U32(ctx, 31, 0x193228u);
    ctx->pc = 0x193224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193220u;
            // 0x193224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193228u; }
        if (ctx->pc != 0x193228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193228u; }
        if (ctx->pc != 0x193228u) { return; }
    }
    ctx->pc = 0x193228u;
    // 0x193228: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x193228u;
    {
        const bool branch_taken_0x193228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193228) {
            ctx->pc = 0x193350u;
            goto label_193350;
        }
    }
    ctx->pc = 0x193230u;
label_193230:
    // 0x193230: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x193234: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x193234u;
    {
        const bool branch_taken_0x193234 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x193238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193234u;
            // 0x193238: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193234) {
            ctx->pc = 0x1932C8u;
            goto label_1932c8;
        }
    }
    ctx->pc = 0x19323Cu;
    // 0x19323c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x19323cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x193240: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x193240u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x193244: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x193244u;
    {
        const bool branch_taken_0x193244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193244) {
            ctx->pc = 0x193290u;
            goto label_193290;
        }
    }
    ctx->pc = 0x19324Cu;
    // 0x19324c: 0xc0656a4  jal         func_195A90
    ctx->pc = 0x19324Cu;
    SET_GPR_U32(ctx, 31, 0x193254u);
    ctx->pc = 0x195A90u;
    if (runtime->hasFunction(0x195A90u)) {
        auto targetFn = runtime->lookupFunction(0x195A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193254u; }
        if (ctx->pc != 0x193254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastFire_0x195a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193254u; }
        if (ctx->pc != 0x193254u) { return; }
    }
    ctx->pc = 0x193254u;
    // 0x193254: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193258: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19325c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193264: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x193268: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19326c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x19326cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193270: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x193270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x193274: 0xc065944  jal         func_196510
    ctx->pc = 0x193274u;
    SET_GPR_U32(ctx, 31, 0x19327Cu);
    ctx->pc = 0x193278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193274u;
            // 0x193278: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19327Cu; }
        if (ctx->pc != 0x19327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19327Cu; }
        if (ctx->pc != 0x19327Cu) { return; }
    }
    ctx->pc = 0x19327Cu;
    // 0x19327c: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x19327Cu;
    SET_GPR_U32(ctx, 31, 0x193284u);
    ctx->pc = 0x193280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19327Cu;
            // 0x193280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193284u; }
        if (ctx->pc != 0x193284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193284u; }
        if (ctx->pc != 0x193284u) { return; }
    }
    ctx->pc = 0x193284u;
    // 0x193284: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x193284u;
    {
        const bool branch_taken_0x193284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193284) {
            ctx->pc = 0x193350u;
            goto label_193350;
        }
    }
    ctx->pc = 0x19328Cu;
    // 0x19328c: 0x0  nop
    ctx->pc = 0x19328cu;
    // NOP
label_193290:
    // 0x193290: 0xc0656a4  jal         func_195A90
    ctx->pc = 0x193290u;
    SET_GPR_U32(ctx, 31, 0x193298u);
    ctx->pc = 0x195A90u;
    if (runtime->hasFunction(0x195A90u)) {
        auto targetFn = runtime->lookupFunction(0x195A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193298u; }
        if (ctx->pc != 0x193298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastFire_0x195a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193298u; }
        if (ctx->pc != 0x193298u) { return; }
    }
    ctx->pc = 0x193298u;
    // 0x193298: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19329c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1932a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1932a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1932a4: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1932a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1932a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1932ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1932b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1932b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1932b8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1932b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1932bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1932BCu;
    {
        const bool branch_taken_0x1932bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1932C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932BCu;
            // 0x1932c0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932bc) {
            ctx->pc = 0x193350u;
            goto label_193350;
        }
    }
    ctx->pc = 0x1932C4u;
    // 0x1932c4: 0x0  nop
    ctx->pc = 0x1932c4u;
    // NOP
label_1932c8:
    // 0x1932c8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1932c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1932cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1932ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1932d0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1932d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1932d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1932d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1932d8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1932d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1932dc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1932dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1932e0: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x1932e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x1932e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1932e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1932e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932ec: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1932ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1932f0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1932f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1932f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1932f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1932f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1932f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1932fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1932fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193304: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x193304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x193308: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19330c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19330cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193310: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x193310u;
    SET_GPR_U32(ctx, 31, 0x193318u);
    ctx->pc = 0x193314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193310u;
            // 0x193314: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193318u; }
        if (ctx->pc != 0x193318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193318u; }
        if (ctx->pc != 0x193318u) { return; }
    }
    ctx->pc = 0x193318u;
    // 0x193318: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19331c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193320: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x193324: 0x24c64270  addiu       $a2, $a2, 0x4270
    ctx->pc = 0x193324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17008));
    // 0x193328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19332c: 0xc053c88  jal         func_14F220
    ctx->pc = 0x19332Cu;
    SET_GPR_U32(ctx, 31, 0x193334u);
    ctx->pc = 0x193330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19332Cu;
            // 0x193330: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193334u; }
        if (ctx->pc != 0x193334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193334u; }
        if (ctx->pc != 0x193334u) { return; }
    }
    ctx->pc = 0x193334u;
    // 0x193334: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x193334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193338: 0x286103e9  slti        $at, $v1, 0x3E9
    ctx->pc = 0x193338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x19333c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19333Cu;
    {
        const bool branch_taken_0x19333c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x193340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19333Cu;
            // 0x193340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19333c) {
            ctx->pc = 0x193350u;
            goto label_193350;
        }
    }
    ctx->pc = 0x193344u;
    // 0x193344: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193344u;
    SET_GPR_U32(ctx, 31, 0x19334Cu);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19334Cu; }
        if (ctx->pc != 0x19334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19334Cu; }
        if (ctx->pc != 0x19334Cu) { return; }
    }
    ctx->pc = 0x19334Cu;
    // 0x19334c: 0x0  nop
    ctx->pc = 0x19334cu;
    // NOP
label_193350:
    // 0x193350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19335c: 0x3e00008  jr          $ra
    ctx->pc = 0x19335Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19335Cu;
            // 0x193360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1930B8u: goto label_1930b8;
            case 0x1930D0u: goto label_1930d0;
            case 0x1930F8u: goto label_1930f8;
            case 0x193178u: goto label_193178;
            case 0x193220u: goto label_193220;
            case 0x193230u: goto label_193230;
            case 0x193290u: goto label_193290;
            case 0x1932C8u: goto label_1932c8;
            case 0x193350u: goto label_193350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193364u;
}
