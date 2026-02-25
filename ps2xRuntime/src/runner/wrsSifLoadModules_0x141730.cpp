#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSifLoadModules
// Address: 0x141730 - 0x141848
void wrsSifLoadModules_0x141730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSifLoadModules_0x141730");
#endif

    ctx->pc = 0x141730u;

    // 0x141730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x141734: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x141734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x141738: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x141738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14173c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14173cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141740: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x141744: 0x24c67890  addiu       $a2, $a2, 0x7890
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30864));
    // 0x141748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14174c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141758: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14175c: 0x0  nop
    ctx->pc = 0x14175cu;
    // NOP
label_141760:
    // 0x141760: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x141760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x141764: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x141764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x141768: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x14176c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x14176cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x141770: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x141770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x141774: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x141774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x141778: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x141778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x14177c: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x14177cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x141780: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x141780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x141784: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x141784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x141788: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x141788u;
    {
        const bool branch_taken_0x141788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141788u;
            // 0x14178c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141788) {
            ctx->pc = 0x141760u;
            goto label_141760;
        }
    }
    ctx->pc = 0x141790u;
    // 0x141790: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x141794: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x141798: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x141798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14179c: 0x246394b0  addiu       $v1, $v1, -0x6B50
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939824));
    // 0x1417a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1417a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417a4: 0x26317890  addiu       $s1, $s1, 0x7890
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30864));
    // 0x1417a8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1417a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1417ac: 0x0  nop
    ctx->pc = 0x1417acu;
    // NOP
label_1417b0:
    // 0x1417b0: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1417b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1417b4: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1417b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1417b8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1417B8u;
    {
        const bool branch_taken_0x1417b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1417B8u;
            // 0x1417bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417b8) {
            ctx->pc = 0x141828u;
            goto label_141828;
        }
    }
    ctx->pc = 0x1417C0u;
    // 0x1417c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417c4: 0xc04dac2  jal         func_136B08
    ctx->pc = 0x1417C4u;
    SET_GPR_U32(ctx, 31, 0x1417CCu);
    ctx->pc = 0x1417C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417C4u;
            // 0x1417c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B08u;
    if (runtime->hasFunction(0x136B08u)) {
        auto targetFn = runtime->lookupFunction(0x136B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417CCu; }
        if (ctx->pc != 0x1417CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x136b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417CCu; }
        if (ctx->pc != 0x1417CCu) { return; }
    }
    ctx->pc = 0x1417CCu;
    // 0x1417cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1417ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417d0: 0x661000b  bgez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1417D0u;
    {
        const bool branch_taken_0x1417d0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1417D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1417D0u;
            // 0x1417d4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417d0) {
            ctx->pc = 0x141800u;
            goto label_141800;
        }
    }
    ctx->pc = 0x1417D8u;
    // 0x1417d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1417d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417dc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1417DCu;
    SET_GPR_U32(ctx, 31, 0x1417E4u);
    ctx->pc = 0x1417E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417DCu;
            // 0x1417e0: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417E4u; }
        if (ctx->pc != 0x1417E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417E4u; }
        if (ctx->pc != 0x1417E4u) { return; }
    }
    ctx->pc = 0x1417E4u;
    // 0x1417e4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1417e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1417e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1417e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417ec: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1417ECu;
    SET_GPR_U32(ctx, 31, 0x1417F4u);
    ctx->pc = 0x1417F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417ECu;
            // 0x1417f0: 0x24840758  addiu       $a0, $a0, 0x758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F4u; }
        if (ctx->pc != 0x1417F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F4u; }
        if (ctx->pc != 0x1417F4u) { return; }
    }
    ctx->pc = 0x1417F4u;
    // 0x1417f4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1417F4u;
    {
        const bool branch_taken_0x1417f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417f4) {
            ctx->pc = 0x1417B0u;
            goto label_1417b0;
        }
    }
    ctx->pc = 0x1417FCu;
    // 0x1417fc: 0x0  nop
    ctx->pc = 0x1417fcu;
    // NOP
label_141800:
    // 0x141800: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141804: 0x24840760  addiu       $a0, $a0, 0x760
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    // 0x141808: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141808u;
    SET_GPR_U32(ctx, 31, 0x141810u);
    ctx->pc = 0x14180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141808u;
            // 0x14180c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141810u; }
        if (ctx->pc != 0x141810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141810u; }
        if (ctx->pc != 0x141810u) { return; }
    }
    ctx->pc = 0x141810u;
    // 0x141810: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x141810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x141814: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x141818: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14181c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x14181Cu;
    {
        const bool branch_taken_0x14181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14181Cu;
            // 0x141820: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14181c) {
            ctx->pc = 0x1417B0u;
            goto label_1417b0;
        }
    }
    ctx->pc = 0x141824u;
    // 0x141824: 0x0  nop
    ctx->pc = 0x141824u;
    // NOP
label_141828:
    // 0x141828: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x141828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14182c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14182cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14183c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141840: 0x3e00008  jr          $ra
    ctx->pc = 0x141840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141840u;
            // 0x141844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141760u: goto label_141760;
            case 0x1417B0u: goto label_1417b0;
            case 0x141800u: goto label_141800;
            case 0x141828u: goto label_141828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141848u;
}
