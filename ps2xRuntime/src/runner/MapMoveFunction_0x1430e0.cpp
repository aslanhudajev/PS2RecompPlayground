#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveFunction
// Address: 0x1430e0 - 0x143204
void MapMoveFunction_0x1430e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveFunction_0x1430e0");
#endif

    ctx->pc = 0x1430e0u;

label_1430e0:
    // 0x1430e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1430e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1430e4:
    // 0x1430e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1430e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_1430e8:
    // 0x1430e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1430e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1430ec:
    // 0x1430ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1430ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1430f0:
    // 0x1430f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1430f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1430f4:
    // 0x1430f4: 0x8c319d08  lw          $s1, -0x62F8($at)
    ctx->pc = 0x1430f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941960)));
label_1430f8:
    // 0x1430f8: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1430fc:
    if (ctx->pc == 0x1430FCu) {
        ctx->pc = 0x143100u;
        goto label_143100;
    }
    ctx->pc = 0x1430F8u;
    {
        const bool branch_taken_0x1430f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430f8) {
            ctx->pc = 0x143170u;
            goto label_143170;
        }
    }
    ctx->pc = 0x143100u;
label_143100:
    // 0x143100: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_143104:
    // 0x143104: 0xc04b788  jal         func_12DE20
label_143108:
    if (ctx->pc == 0x143108u) {
        ctx->pc = 0x143108u;
            // 0x143108: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x14310Cu;
        goto label_14310c;
    }
    ctx->pc = 0x143104u;
    SET_GPR_U32(ctx, 31, 0x14310Cu);
    ctx->pc = 0x143108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143104u;
            // 0x143108: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14310Cu; }
        if (ctx->pc != 0x14310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14310Cu; }
        if (ctx->pc != 0x14310Cu) { return; }
    }
    ctx->pc = 0x14310Cu;
label_14310c:
    // 0x14310c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_143110:
    if (ctx->pc == 0x143110u) {
        ctx->pc = 0x143114u;
        goto label_143114;
    }
    ctx->pc = 0x14310Cu;
    {
        const bool branch_taken_0x14310c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14310c) {
            ctx->pc = 0x143158u;
            goto label_143158;
        }
    }
    ctx->pc = 0x143114u;
label_143114:
    // 0x143114: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x143114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143118:
    // 0x143118: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14311c:
    // 0x14311c: 0xc04b75e  jal         func_12DD78
label_143120:
    if (ctx->pc == 0x143120u) {
        ctx->pc = 0x143120u;
            // 0x143120: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x143124u;
        goto label_143124;
    }
    ctx->pc = 0x14311Cu;
    SET_GPR_U32(ctx, 31, 0x143124u);
    ctx->pc = 0x143120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14311Cu;
            // 0x143120: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143124u; }
        if (ctx->pc != 0x143124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143124u; }
        if (ctx->pc != 0x143124u) { return; }
    }
    ctx->pc = 0x143124u;
label_143124:
    // 0x143124: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x143124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143128:
    // 0x143128: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x143128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14312c:
    // 0x14312c: 0xc04b7da  jal         func_12DF68
label_143130:
    if (ctx->pc == 0x143130u) {
        ctx->pc = 0x143130u;
            // 0x143130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143134u;
        goto label_143134;
    }
    ctx->pc = 0x14312Cu;
    SET_GPR_U32(ctx, 31, 0x143134u);
    ctx->pc = 0x143130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14312Cu;
            // 0x143130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143134u; }
        if (ctx->pc != 0x143134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143134u; }
        if (ctx->pc != 0x143134u) { return; }
    }
    ctx->pc = 0x143134u;
label_143134:
    // 0x143134: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x143134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143138:
    // 0x143138: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x143138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14313c:
    // 0x14313c: 0xc04b804  jal         func_12E010
label_143140:
    if (ctx->pc == 0x143140u) {
        ctx->pc = 0x143140u;
            // 0x143140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143144u;
        goto label_143144;
    }
    ctx->pc = 0x14313Cu;
    SET_GPR_U32(ctx, 31, 0x143144u);
    ctx->pc = 0x143140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14313Cu;
            // 0x143140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143144u; }
        if (ctx->pc != 0x143144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143144u; }
        if (ctx->pc != 0x143144u) { return; }
    }
    ctx->pc = 0x143144u;
label_143144:
    // 0x143144: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143148:
    // 0x143148: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x143148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14314c:
    // 0x14314c: 0xc04b7b0  jal         func_12DEC0
label_143150:
    if (ctx->pc == 0x143150u) {
        ctx->pc = 0x143150u;
            // 0x143150: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143154u;
        goto label_143154;
    }
    ctx->pc = 0x14314Cu;
    SET_GPR_U32(ctx, 31, 0x143154u);
    ctx->pc = 0x143150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14314Cu;
            // 0x143150: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143154u; }
        if (ctx->pc != 0x143154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143154u; }
        if (ctx->pc != 0x143154u) { return; }
    }
    ctx->pc = 0x143154u;
label_143154:
    // 0x143154: 0x0  nop
    ctx->pc = 0x143154u;
    // NOP
label_143158:
    // 0x143158: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x143158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_14315c:
    // 0x14315c: 0x40f809  jalr        $v0
label_143160:
    if (ctx->pc == 0x143160u) {
        ctx->pc = 0x143160u;
            // 0x143160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143164u;
        goto label_143164;
    }
    ctx->pc = 0x14315Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143164u);
        ctx->pc = 0x143160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14315Cu;
            // 0x143160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1430E0u: goto label_1430e0;
            case 0x1430E4u: goto label_1430e4;
            case 0x1430E8u: goto label_1430e8;
            case 0x1430ECu: goto label_1430ec;
            case 0x1430F0u: goto label_1430f0;
            case 0x1430F4u: goto label_1430f4;
            case 0x1430F8u: goto label_1430f8;
            case 0x1430FCu: goto label_1430fc;
            case 0x143100u: goto label_143100;
            case 0x143104u: goto label_143104;
            case 0x143108u: goto label_143108;
            case 0x14310Cu: goto label_14310c;
            case 0x143110u: goto label_143110;
            case 0x143114u: goto label_143114;
            case 0x143118u: goto label_143118;
            case 0x14311Cu: goto label_14311c;
            case 0x143120u: goto label_143120;
            case 0x143124u: goto label_143124;
            case 0x143128u: goto label_143128;
            case 0x14312Cu: goto label_14312c;
            case 0x143130u: goto label_143130;
            case 0x143134u: goto label_143134;
            case 0x143138u: goto label_143138;
            case 0x14313Cu: goto label_14313c;
            case 0x143140u: goto label_143140;
            case 0x143144u: goto label_143144;
            case 0x143148u: goto label_143148;
            case 0x14314Cu: goto label_14314c;
            case 0x143150u: goto label_143150;
            case 0x143154u: goto label_143154;
            case 0x143158u: goto label_143158;
            case 0x14315Cu: goto label_14315c;
            case 0x143160u: goto label_143160;
            case 0x143164u: goto label_143164;
            case 0x143168u: goto label_143168;
            case 0x14316Cu: goto label_14316c;
            case 0x143170u: goto label_143170;
            case 0x143174u: goto label_143174;
            case 0x143178u: goto label_143178;
            case 0x14317Cu: goto label_14317c;
            case 0x143180u: goto label_143180;
            case 0x143184u: goto label_143184;
            case 0x143188u: goto label_143188;
            case 0x14318Cu: goto label_14318c;
            case 0x143190u: goto label_143190;
            case 0x143194u: goto label_143194;
            case 0x143198u: goto label_143198;
            case 0x14319Cu: goto label_14319c;
            case 0x1431A0u: goto label_1431a0;
            case 0x1431A4u: goto label_1431a4;
            case 0x1431A8u: goto label_1431a8;
            case 0x1431ACu: goto label_1431ac;
            case 0x1431B0u: goto label_1431b0;
            case 0x1431B4u: goto label_1431b4;
            case 0x1431B8u: goto label_1431b8;
            case 0x1431BCu: goto label_1431bc;
            case 0x1431C0u: goto label_1431c0;
            case 0x1431C4u: goto label_1431c4;
            case 0x1431C8u: goto label_1431c8;
            case 0x1431CCu: goto label_1431cc;
            case 0x1431D0u: goto label_1431d0;
            case 0x1431D4u: goto label_1431d4;
            case 0x1431D8u: goto label_1431d8;
            case 0x1431DCu: goto label_1431dc;
            case 0x1431E0u: goto label_1431e0;
            case 0x1431E4u: goto label_1431e4;
            case 0x1431E8u: goto label_1431e8;
            case 0x1431ECu: goto label_1431ec;
            case 0x1431F0u: goto label_1431f0;
            case 0x1431F4u: goto label_1431f4;
            case 0x1431F8u: goto label_1431f8;
            case 0x1431FCu: goto label_1431fc;
            case 0x143200u: goto label_143200;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x143164u; }
            if (ctx->pc != 0x143164u) { return; }
        }
    }
    ctx->pc = 0x143164u;
label_143164:
    // 0x143164: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
label_143168:
    if (ctx->pc == 0x143168u) {
        ctx->pc = 0x143168u;
            // 0x143168: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14316Cu;
        goto label_14316c;
    }
    ctx->pc = 0x143164u;
    {
        const bool branch_taken_0x143164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x143168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143164u;
            // 0x143168: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143164) {
            ctx->pc = 0x143100u;
            goto label_143100;
        }
    }
    ctx->pc = 0x14316Cu;
label_14316c:
    // 0x14316c: 0x0  nop
    ctx->pc = 0x14316cu;
    // NOP
label_143170:
    // 0x143170: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_143174:
    // 0x143174: 0x8c319d10  lw          $s1, -0x62F0($at)
    ctx->pc = 0x143174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941968)));
label_143178:
    // 0x143178: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_14317c:
    if (ctx->pc == 0x14317Cu) {
        ctx->pc = 0x143180u;
        goto label_143180;
    }
    ctx->pc = 0x143178u;
    {
        const bool branch_taken_0x143178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x143178) {
            ctx->pc = 0x1431F0u;
            goto label_1431f0;
        }
    }
    ctx->pc = 0x143180u;
label_143180:
    // 0x143180: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x143180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_143184:
    // 0x143184: 0xc04b788  jal         func_12DE20
label_143188:
    if (ctx->pc == 0x143188u) {
        ctx->pc = 0x143188u;
            // 0x143188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x14318Cu;
        goto label_14318c;
    }
    ctx->pc = 0x143184u;
    SET_GPR_U32(ctx, 31, 0x14318Cu);
    ctx->pc = 0x143188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143184u;
            // 0x143188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14318Cu; }
        if (ctx->pc != 0x14318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14318Cu; }
        if (ctx->pc != 0x14318Cu) { return; }
    }
    ctx->pc = 0x14318Cu;
label_14318c:
    // 0x14318c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_143190:
    if (ctx->pc == 0x143190u) {
        ctx->pc = 0x143194u;
        goto label_143194;
    }
    ctx->pc = 0x14318Cu;
    {
        const bool branch_taken_0x14318c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14318c) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x143194u;
label_143194:
    // 0x143194: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x143194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143198:
    // 0x143198: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14319c:
    // 0x14319c: 0xc04b75e  jal         func_12DD78
label_1431a0:
    if (ctx->pc == 0x1431A0u) {
        ctx->pc = 0x1431A0u;
            // 0x1431a0: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1431A4u;
        goto label_1431a4;
    }
    ctx->pc = 0x14319Cu;
    SET_GPR_U32(ctx, 31, 0x1431A4u);
    ctx->pc = 0x1431A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14319Cu;
            // 0x1431a0: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431A4u; }
        if (ctx->pc != 0x1431A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431A4u; }
        if (ctx->pc != 0x1431A4u) { return; }
    }
    ctx->pc = 0x1431A4u;
label_1431a4:
    // 0x1431a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1431a8:
    // 0x1431a8: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1431a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1431ac:
    // 0x1431ac: 0xc04b7da  jal         func_12DF68
label_1431b0:
    if (ctx->pc == 0x1431B0u) {
        ctx->pc = 0x1431B0u;
            // 0x1431b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1431B4u;
        goto label_1431b4;
    }
    ctx->pc = 0x1431ACu;
    SET_GPR_U32(ctx, 31, 0x1431B4u);
    ctx->pc = 0x1431B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1431ACu;
            // 0x1431b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431B4u; }
        if (ctx->pc != 0x1431B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431B4u; }
        if (ctx->pc != 0x1431B4u) { return; }
    }
    ctx->pc = 0x1431B4u;
label_1431b4:
    // 0x1431b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1431b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1431b8:
    // 0x1431b8: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1431b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1431bc:
    // 0x1431bc: 0xc04b804  jal         func_12E010
label_1431c0:
    if (ctx->pc == 0x1431C0u) {
        ctx->pc = 0x1431C0u;
            // 0x1431c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1431C4u;
        goto label_1431c4;
    }
    ctx->pc = 0x1431BCu;
    SET_GPR_U32(ctx, 31, 0x1431C4u);
    ctx->pc = 0x1431C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1431BCu;
            // 0x1431c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431C4u; }
        if (ctx->pc != 0x1431C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431C4u; }
        if (ctx->pc != 0x1431C4u) { return; }
    }
    ctx->pc = 0x1431C4u;
label_1431c4:
    // 0x1431c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1431c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1431c8:
    // 0x1431c8: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1431c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1431cc:
    // 0x1431cc: 0xc04b7b0  jal         func_12DEC0
label_1431d0:
    if (ctx->pc == 0x1431D0u) {
        ctx->pc = 0x1431D0u;
            // 0x1431d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1431D4u;
        goto label_1431d4;
    }
    ctx->pc = 0x1431CCu;
    SET_GPR_U32(ctx, 31, 0x1431D4u);
    ctx->pc = 0x1431D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1431CCu;
            // 0x1431d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431D4u; }
        if (ctx->pc != 0x1431D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431D4u; }
        if (ctx->pc != 0x1431D4u) { return; }
    }
    ctx->pc = 0x1431D4u;
label_1431d4:
    // 0x1431d4: 0x0  nop
    ctx->pc = 0x1431d4u;
    // NOP
label_1431d8:
    // 0x1431d8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1431d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1431dc:
    // 0x1431dc: 0x40f809  jalr        $v0
label_1431e0:
    if (ctx->pc == 0x1431E0u) {
        ctx->pc = 0x1431E0u;
            // 0x1431e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1431E4u;
        goto label_1431e4;
    }
    ctx->pc = 0x1431DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1431E4u);
        ctx->pc = 0x1431E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431DCu;
            // 0x1431e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1430E0u: goto label_1430e0;
            case 0x1430E4u: goto label_1430e4;
            case 0x1430E8u: goto label_1430e8;
            case 0x1430ECu: goto label_1430ec;
            case 0x1430F0u: goto label_1430f0;
            case 0x1430F4u: goto label_1430f4;
            case 0x1430F8u: goto label_1430f8;
            case 0x1430FCu: goto label_1430fc;
            case 0x143100u: goto label_143100;
            case 0x143104u: goto label_143104;
            case 0x143108u: goto label_143108;
            case 0x14310Cu: goto label_14310c;
            case 0x143110u: goto label_143110;
            case 0x143114u: goto label_143114;
            case 0x143118u: goto label_143118;
            case 0x14311Cu: goto label_14311c;
            case 0x143120u: goto label_143120;
            case 0x143124u: goto label_143124;
            case 0x143128u: goto label_143128;
            case 0x14312Cu: goto label_14312c;
            case 0x143130u: goto label_143130;
            case 0x143134u: goto label_143134;
            case 0x143138u: goto label_143138;
            case 0x14313Cu: goto label_14313c;
            case 0x143140u: goto label_143140;
            case 0x143144u: goto label_143144;
            case 0x143148u: goto label_143148;
            case 0x14314Cu: goto label_14314c;
            case 0x143150u: goto label_143150;
            case 0x143154u: goto label_143154;
            case 0x143158u: goto label_143158;
            case 0x14315Cu: goto label_14315c;
            case 0x143160u: goto label_143160;
            case 0x143164u: goto label_143164;
            case 0x143168u: goto label_143168;
            case 0x14316Cu: goto label_14316c;
            case 0x143170u: goto label_143170;
            case 0x143174u: goto label_143174;
            case 0x143178u: goto label_143178;
            case 0x14317Cu: goto label_14317c;
            case 0x143180u: goto label_143180;
            case 0x143184u: goto label_143184;
            case 0x143188u: goto label_143188;
            case 0x14318Cu: goto label_14318c;
            case 0x143190u: goto label_143190;
            case 0x143194u: goto label_143194;
            case 0x143198u: goto label_143198;
            case 0x14319Cu: goto label_14319c;
            case 0x1431A0u: goto label_1431a0;
            case 0x1431A4u: goto label_1431a4;
            case 0x1431A8u: goto label_1431a8;
            case 0x1431ACu: goto label_1431ac;
            case 0x1431B0u: goto label_1431b0;
            case 0x1431B4u: goto label_1431b4;
            case 0x1431B8u: goto label_1431b8;
            case 0x1431BCu: goto label_1431bc;
            case 0x1431C0u: goto label_1431c0;
            case 0x1431C4u: goto label_1431c4;
            case 0x1431C8u: goto label_1431c8;
            case 0x1431CCu: goto label_1431cc;
            case 0x1431D0u: goto label_1431d0;
            case 0x1431D4u: goto label_1431d4;
            case 0x1431D8u: goto label_1431d8;
            case 0x1431DCu: goto label_1431dc;
            case 0x1431E0u: goto label_1431e0;
            case 0x1431E4u: goto label_1431e4;
            case 0x1431E8u: goto label_1431e8;
            case 0x1431ECu: goto label_1431ec;
            case 0x1431F0u: goto label_1431f0;
            case 0x1431F4u: goto label_1431f4;
            case 0x1431F8u: goto label_1431f8;
            case 0x1431FCu: goto label_1431fc;
            case 0x143200u: goto label_143200;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1431E4u; }
            if (ctx->pc != 0x1431E4u) { return; }
        }
    }
    ctx->pc = 0x1431E4u;
label_1431e4:
    // 0x1431e4: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
label_1431e8:
    if (ctx->pc == 0x1431E8u) {
        ctx->pc = 0x1431E8u;
            // 0x1431e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1431ECu;
        goto label_1431ec;
    }
    ctx->pc = 0x1431E4u;
    {
        const bool branch_taken_0x1431e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1431E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431E4u;
            // 0x1431e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431e4) {
            ctx->pc = 0x143180u;
            goto label_143180;
        }
    }
    ctx->pc = 0x1431ECu;
label_1431ec:
    // 0x1431ec: 0x0  nop
    ctx->pc = 0x1431ecu;
    // NOP
label_1431f0:
    // 0x1431f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1431f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1431f4:
    // 0x1431f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1431f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1431f8:
    // 0x1431f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1431f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1431fc:
    // 0x1431fc: 0x3e00008  jr          $ra
label_143200:
    if (ctx->pc == 0x143200u) {
        ctx->pc = 0x143200u;
            // 0x143200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x143204u;
        goto label_fallthrough_0x1431fc;
    }
    ctx->pc = 0x1431FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431FCu;
            // 0x143200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1430E0u: goto label_1430e0;
            case 0x1430E4u: goto label_1430e4;
            case 0x1430E8u: goto label_1430e8;
            case 0x1430ECu: goto label_1430ec;
            case 0x1430F0u: goto label_1430f0;
            case 0x1430F4u: goto label_1430f4;
            case 0x1430F8u: goto label_1430f8;
            case 0x1430FCu: goto label_1430fc;
            case 0x143100u: goto label_143100;
            case 0x143104u: goto label_143104;
            case 0x143108u: goto label_143108;
            case 0x14310Cu: goto label_14310c;
            case 0x143110u: goto label_143110;
            case 0x143114u: goto label_143114;
            case 0x143118u: goto label_143118;
            case 0x14311Cu: goto label_14311c;
            case 0x143120u: goto label_143120;
            case 0x143124u: goto label_143124;
            case 0x143128u: goto label_143128;
            case 0x14312Cu: goto label_14312c;
            case 0x143130u: goto label_143130;
            case 0x143134u: goto label_143134;
            case 0x143138u: goto label_143138;
            case 0x14313Cu: goto label_14313c;
            case 0x143140u: goto label_143140;
            case 0x143144u: goto label_143144;
            case 0x143148u: goto label_143148;
            case 0x14314Cu: goto label_14314c;
            case 0x143150u: goto label_143150;
            case 0x143154u: goto label_143154;
            case 0x143158u: goto label_143158;
            case 0x14315Cu: goto label_14315c;
            case 0x143160u: goto label_143160;
            case 0x143164u: goto label_143164;
            case 0x143168u: goto label_143168;
            case 0x14316Cu: goto label_14316c;
            case 0x143170u: goto label_143170;
            case 0x143174u: goto label_143174;
            case 0x143178u: goto label_143178;
            case 0x14317Cu: goto label_14317c;
            case 0x143180u: goto label_143180;
            case 0x143184u: goto label_143184;
            case 0x143188u: goto label_143188;
            case 0x14318Cu: goto label_14318c;
            case 0x143190u: goto label_143190;
            case 0x143194u: goto label_143194;
            case 0x143198u: goto label_143198;
            case 0x14319Cu: goto label_14319c;
            case 0x1431A0u: goto label_1431a0;
            case 0x1431A4u: goto label_1431a4;
            case 0x1431A8u: goto label_1431a8;
            case 0x1431ACu: goto label_1431ac;
            case 0x1431B0u: goto label_1431b0;
            case 0x1431B4u: goto label_1431b4;
            case 0x1431B8u: goto label_1431b8;
            case 0x1431BCu: goto label_1431bc;
            case 0x1431C0u: goto label_1431c0;
            case 0x1431C4u: goto label_1431c4;
            case 0x1431C8u: goto label_1431c8;
            case 0x1431CCu: goto label_1431cc;
            case 0x1431D0u: goto label_1431d0;
            case 0x1431D4u: goto label_1431d4;
            case 0x1431D8u: goto label_1431d8;
            case 0x1431DCu: goto label_1431dc;
            case 0x1431E0u: goto label_1431e0;
            case 0x1431E4u: goto label_1431e4;
            case 0x1431E8u: goto label_1431e8;
            case 0x1431ECu: goto label_1431ec;
            case 0x1431F0u: goto label_1431f0;
            case 0x1431F4u: goto label_1431f4;
            case 0x1431F8u: goto label_1431f8;
            case 0x1431FCu: goto label_1431fc;
            case 0x143200u: goto label_143200;
            default: break;
        }
        return;
    }
label_fallthrough_0x1431fc:
    ctx->pc = 0x143204u;
}
