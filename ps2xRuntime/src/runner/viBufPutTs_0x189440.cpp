#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufPutTs
// Address: 0x189440 - 0x189574
void viBufPutTs_0x189440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufPutTs_0x189440");
#endif

    ctx->pc = 0x189440u;

    // 0x189440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18944c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x189450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x189458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18945c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x18945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x189460: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189460u;
    SET_GPR_U32(ctx, 31, 0x189468u);
    ctx->pc = 0x189464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189460u;
            // 0x189464: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189468u; }
        if (ctx->pc != 0x189468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189468u; }
        if (ctx->pc != 0x189468u) { return; }
    }
    ctx->pc = 0x189468u;
    // 0x189468: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x189468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x18946c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x18946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x189470: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x189470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189474: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x189474u;
    {
        const bool branch_taken_0x189474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189474u;
            // 0x189478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189474) {
            ctx->pc = 0x189550u;
            goto label_189550;
        }
    }
    ctx->pc = 0x18947Cu;
    // 0x18947c: 0xc062560  jal         func_189580
    ctx->pc = 0x18947Cu;
    SET_GPR_U32(ctx, 31, 0x189484u);
    ctx->pc = 0x189480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18947Cu;
            // 0x189480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189580u;
    if (runtime->hasFunction(0x189580u)) {
        auto targetFn = runtime->lookupFunction(0x189580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189484u; }
        if (ctx->pc != 0x189484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufModifyPts_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189484u; }
        if (ctx->pc != 0x189484u) { return; }
    }
    ctx->pc = 0x189484u;
    // 0x189484: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x189484u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189488: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x189488u;
    {
        const bool branch_taken_0x189488 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x189488) {
            ctx->pc = 0x1894A0u;
            goto label_1894a0;
        }
    }
    ctx->pc = 0x189490u;
    // 0x189490: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x189490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189494: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x189494u;
    {
        const bool branch_taken_0x189494 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x189494) {
            ctx->pc = 0x189548u;
            goto label_189548;
        }
    }
    ctx->pc = 0x18949Cu;
    // 0x18949c: 0x0  nop
    ctx->pc = 0x18949cu;
    // NOP
label_1894a0:
    // 0x1894a0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1894a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1894a4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1894a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1894a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1894ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1894b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1894b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1894b8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1894b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1894bc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1894c0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1894c4: 0xde050008  ld          $a1, 0x8($s0)
    ctx->pc = 0x1894c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1894c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1894cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1894ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1894d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1894d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1894d8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1894d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1894dc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1894e0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1894e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1894e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1894e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1894e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1894e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1894ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1894f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1894f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1894f8: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1894fc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x189500: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x189504: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189508: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18950c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189510: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x189514: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x189514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189518: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x189518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x18951c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x189520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x189520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x189524: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x189524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x189528: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x189528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x18952c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x18952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x189530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x189534: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x189534u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189538: 0x0  nop
    ctx->pc = 0x189538u;
    // NOP
    // 0x18953c: 0x0  nop
    ctx->pc = 0x18953cu;
    // NOP
    // 0x189540: 0x1010  mfhi        $v0
    ctx->pc = 0x189540u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x189544: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x189544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_189548:
    // 0x189548: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x189548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18954c: 0x0  nop
    ctx->pc = 0x18954cu;
    // NOP
label_189550:
    // 0x189550: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189550u;
    SET_GPR_U32(ctx, 31, 0x189558u);
    ctx->pc = 0x189554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189550u;
            // 0x189554: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189558u; }
        if (ctx->pc != 0x189558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189558u; }
        if (ctx->pc != 0x189558u) { return; }
    }
    ctx->pc = 0x189558u;
    // 0x189558: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x189558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18955c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18956c: 0x3e00008  jr          $ra
    ctx->pc = 0x18956Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18956Cu;
            // 0x189570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1894A0u: goto label_1894a0;
            case 0x189548u: goto label_189548;
            case 0x189550u: goto label_189550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189574u;
}
