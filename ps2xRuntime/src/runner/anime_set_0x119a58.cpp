#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: anime_set
// Address: 0x119a58 - 0x119d8c
void anime_set_0x119a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("anime_set_0x119a58");
#endif

    ctx->pc = 0x119a58u;

    // 0x119a58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x119a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x119a5c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x119a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x119a60: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x119a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119a64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119a6c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a70: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x119a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x119a74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119a78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119a7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119a80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119a88: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x119a8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119a90: 0x184000b2  blez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x119A90u;
    {
        const bool branch_taken_0x119a90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A90u;
            // 0x119a94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a90) {
            ctx->pc = 0x119D5Cu;
            goto label_119d5c;
        }
    }
    ctx->pc = 0x119A98u;
label_119a98:
    // 0x119a98: 0xc04722a  jal         func_11C8A8
    ctx->pc = 0x119A98u;
    SET_GPR_U32(ctx, 31, 0x119AA0u);
    ctx->pc = 0x119A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A98u;
            // 0x119a9c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C8A8u;
    if (runtime->hasFunction(0x11C8A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AA0u; }
        if (ctx->pc != 0x119AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetData_0x11c8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AA0u; }
        if (ctx->pc != 0x119AA0u) { return; }
    }
    ctx->pc = 0x119AA0u;
    // 0x119aa0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119AA0u;
    {
        const bool branch_taken_0x119aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119aa0) {
            ctx->pc = 0x119ACCu;
            goto label_119acc;
        }
    }
    ctx->pc = 0x119AA8u;
    // 0x119aa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119aac: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x119ab0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119ab4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x119ab8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x119AB8u;
    SET_GPR_U32(ctx, 31, 0x119AC0u);
    ctx->pc = 0x119ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119AB8u;
            // 0x119abc: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AC0u; }
        if (ctx->pc != 0x119AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AC0u; }
        if (ctx->pc != 0x119AC0u) { return; }
    }
    ctx->pc = 0x119AC0u;
    // 0x119ac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x119ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ac4: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119AC4u;
    {
        const bool branch_taken_0x119ac4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x119ac4) {
            ctx->pc = 0x119AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119AC4u;
            // 0x119ac8: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119ADCu;
            goto label_119adc;
        }
    }
    ctx->pc = 0x119ACCu;
label_119acc:
    // 0x119acc: 0xc046618  jal         func_119860
    ctx->pc = 0x119ACCu;
    SET_GPR_U32(ctx, 31, 0x119AD4u);
    ctx->pc = 0x119AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119ACCu;
            // 0x119ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119860u;
    if (runtime->hasFunction(0x119860u)) {
        auto targetFn = runtime->lookupFunction(0x119860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AD4u; }
        if (ctx->pc != 0x119AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_anime_err_0x119860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AD4u; }
        if (ctx->pc != 0x119AD4u) { return; }
    }
    ctx->pc = 0x119AD4u;
    // 0x119ad4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x119AD4u;
    {
        const bool branch_taken_0x119ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AD4u;
            // 0x119ad8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ad4) {
            ctx->pc = 0x119D64u;
            goto label_119d64;
        }
    }
    ctx->pc = 0x119ADCu;
label_119adc:
    // 0x119adc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x119adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119ae0: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x119ae4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x119ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119aec: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x119aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x119af0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x119af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119af4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x119af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119af8: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x119af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x119afc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x119afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x119b00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119b04: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x119b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x119b08: 0x8c86fffc  lw          $a2, -0x4($a0)
    ctx->pc = 0x119b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x119b0c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x119b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119b10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x119B10u;
    {
        const bool branch_taken_0x119b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B10u;
            // 0x119b14: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b10) {
            ctx->pc = 0x119B30u;
            goto label_119b30;
        }
    }
    ctx->pc = 0x119B18u;
    // 0x119b18: 0x266001b  divu        $zero, $s3, $a2
    ctx->pc = 0x119b18u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x119b1c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119B1Cu;
    {
        const bool branch_taken_0x119b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x119b1c) {
            ctx->pc = 0x119B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119B1Cu;
            // 0x119b20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119B24u;
            goto label_119b24;
        }
    }
    ctx->pc = 0x119B24u;
label_119b24:
    // 0x119b24: 0x1010  mfhi        $v0
    ctx->pc = 0x119b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x119b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119B28u;
    {
        const bool branch_taken_0x119b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B28u;
            // 0x119b2c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b28) {
            ctx->pc = 0x119B34u;
            goto label_119b34;
        }
    }
    ctx->pc = 0x119B30u;
label_119b30:
    // 0x119b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x119b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119b34:
    // 0x119b34: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x119b38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x119B38u;
    {
        const bool branch_taken_0x119b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119b38) {
            ctx->pc = 0x119B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119B38u;
            // 0x119b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119B54u;
            goto label_119b54;
        }
    }
    ctx->pc = 0x119B40u;
    // 0x119b40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b48: 0xc046764  jal         func_119D90
    ctx->pc = 0x119B48u;
    SET_GPR_U32(ctx, 31, 0x119B50u);
    ctx->pc = 0x119B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119B48u;
            // 0x119b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119D90u;
    if (runtime->hasFunction(0x119D90u)) {
        auto targetFn = runtime->lookupFunction(0x119D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B50u; }
        if (ctx->pc != 0x119B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keypoint_0x119d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B50u; }
        if (ctx->pc != 0x119B50u) { return; }
    }
    ctx->pc = 0x119B50u;
    // 0x119b50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119b54:
    // 0x119b54: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x119b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x119b58: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x119b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x119b5c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x119B5Cu;
    {
        const bool branch_taken_0x119b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B5Cu;
            // 0x119b60: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b5c) {
            ctx->pc = 0x119CB8u;
            goto label_119cb8;
        }
    }
    ctx->pc = 0x119B64u;
    // 0x119b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119b68: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x119b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119b74: 0x800008  jr          $a0
    ctx->pc = 0x119B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119B7Cu: goto label_119b7c;
            case 0x119B90u: goto label_119b90;
            case 0x119C24u: goto label_119c24;
            case 0x119CB8u: goto label_119cb8;
            case 0x119D44u: goto label_119d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119B7Cu;
label_119b7c:
    // 0x119b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b80: 0xc0468cc  jal         func_11A330
    ctx->pc = 0x119B80u;
    SET_GPR_U32(ctx, 31, 0x119B88u);
    ctx->pc = 0x119B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119B80u;
            // 0x119b84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A330u;
    if (runtime->hasFunction(0x11A330u)) {
        auto targetFn = runtime->lookupFunction(0x11A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B88u; }
        if (ctx->pc != 0x119B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Constant_0x11a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B88u; }
        if (ctx->pc != 0x119B88u) { return; }
    }
    ctx->pc = 0x119B88u;
    // 0x119b88: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x119B88u;
    {
        const bool branch_taken_0x119b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B88u;
            // 0x119b8c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b88) {
            ctx->pc = 0x119D48u;
            goto label_119d48;
        }
    }
    ctx->pc = 0x119B90u;
label_119b90:
    // 0x119b90: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x119b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x119b94: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x119b98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119b9c: 0x2631023  subu        $v0, $s3, $v1
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x119ba0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119BA0u;
    {
        const bool branch_taken_0x119ba0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BA0u;
            // 0x119ba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ba0) {
            ctx->pc = 0x119BB8u;
            goto label_119bb8;
        }
    }
    ctx->pc = 0x119BA8u;
    // 0x119ba8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119bac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119bb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119BB0u;
    {
        const bool branch_taken_0x119bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BB0u;
            // 0x119bb4: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bb0) {
            ctx->pc = 0x119BD0u;
            goto label_119bd0;
        }
    }
    ctx->pc = 0x119BB8u;
label_119bb8:
    // 0x119bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119bb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119bbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119bc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119bc4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119bc8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x119bc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x119bcc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_119bd0:
    // 0x119bd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119bd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119bd8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119bdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119BDCu;
    {
        const bool branch_taken_0x119bdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BDCu;
            // 0x119be0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bdc) {
            ctx->pc = 0x119BF0u;
            goto label_119bf0;
        }
    }
    ctx->pc = 0x119BE4u;
    // 0x119be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119be8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119BE8u;
    {
        const bool branch_taken_0x119be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BE8u;
            // 0x119bec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119be8) {
            ctx->pc = 0x119C04u;
            goto label_119c04;
        }
    }
    ctx->pc = 0x119BF0u;
label_119bf0:
    // 0x119bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119bf0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119bf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119bf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119bfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119c00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_119c04:
    // 0x119c04: 0x0  nop
    ctx->pc = 0x119c04u;
    // NOP
    // 0x119c08: 0x0  nop
    ctx->pc = 0x119c08u;
    // NOP
    // 0x119c0c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x119c0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x119c10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c14: 0xc046796  jal         func_119E58
    ctx->pc = 0x119C14u;
    SET_GPR_U32(ctx, 31, 0x119C1Cu);
    ctx->pc = 0x119C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C14u;
            // 0x119c18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E58u;
    if (runtime->hasFunction(0x119E58u)) {
        auto targetFn = runtime->lookupFunction(0x119E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C1Cu; }
        if (ctx->pc != 0x119C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Hermite_0x119e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C1Cu; }
        if (ctx->pc != 0x119C1Cu) { return; }
    }
    ctx->pc = 0x119C1Cu;
    // 0x119c1c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x119C1Cu;
    {
        const bool branch_taken_0x119c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C1Cu;
            // 0x119c20: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c1c) {
            ctx->pc = 0x119D48u;
            goto label_119d48;
        }
    }
    ctx->pc = 0x119C24u;
label_119c24:
    // 0x119c24: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x119c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x119c28: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x119c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119c30: 0x2631023  subu        $v0, $s3, $v1
    ctx->pc = 0x119c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x119c34: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119C34u;
    {
        const bool branch_taken_0x119c34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C34u;
            // 0x119c38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c34) {
            ctx->pc = 0x119C4Cu;
            goto label_119c4c;
        }
    }
    ctx->pc = 0x119C3Cu;
    // 0x119c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119c40: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119c44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119C44u;
    {
        const bool branch_taken_0x119c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C44u;
            // 0x119c48: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c44) {
            ctx->pc = 0x119C64u;
            goto label_119c64;
        }
    }
    ctx->pc = 0x119C4Cu;
label_119c4c:
    // 0x119c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119c50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119c54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119c58: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119c5c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x119c5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x119c60: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_119c64:
    // 0x119c64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119c68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x119c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119c6c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x119c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119c70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119C70u;
    {
        const bool branch_taken_0x119c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C70u;
            // 0x119c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c70) {
            ctx->pc = 0x119C84u;
            goto label_119c84;
        }
    }
    ctx->pc = 0x119C78u;
    // 0x119c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119C7Cu;
    {
        const bool branch_taken_0x119c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C7Cu;
            // 0x119c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c7c) {
            ctx->pc = 0x119C98u;
            goto label_119c98;
        }
    }
    ctx->pc = 0x119C84u;
label_119c84:
    // 0x119c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119c84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119c88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119c88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119c94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_119c98:
    // 0x119c98: 0x0  nop
    ctx->pc = 0x119c98u;
    // NOP
    // 0x119c9c: 0x0  nop
    ctx->pc = 0x119c9cu;
    // NOP
    // 0x119ca0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x119ca0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x119ca4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ca8: 0xc0467f4  jal         func_119FD0
    ctx->pc = 0x119CA8u;
    SET_GPR_U32(ctx, 31, 0x119CB0u);
    ctx->pc = 0x119CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CA8u;
            // 0x119cac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119FD0u;
    if (runtime->hasFunction(0x119FD0u)) {
        auto targetFn = runtime->lookupFunction(0x119FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CB0u; }
        if (ctx->pc != 0x119CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bezier_0x119fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CB0u; }
        if (ctx->pc != 0x119CB0u) { return; }
    }
    ctx->pc = 0x119CB0u;
    // 0x119cb0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x119CB0u;
    {
        const bool branch_taken_0x119cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CB0u;
            // 0x119cb4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb0) {
            ctx->pc = 0x119D48u;
            goto label_119d48;
        }
    }
    ctx->pc = 0x119CB8u;
label_119cb8:
    // 0x119cb8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x119cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x119cbc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x119cc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119cc4: 0x2631023  subu        $v0, $s3, $v1
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x119cc8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119CC8u;
    {
        const bool branch_taken_0x119cc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CC8u;
            // 0x119ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cc8) {
            ctx->pc = 0x119CE0u;
            goto label_119ce0;
        }
    }
    ctx->pc = 0x119CD0u;
    // 0x119cd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119cd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119cd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119CD8u;
    {
        const bool branch_taken_0x119cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CD8u;
            // 0x119cdc: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cd8) {
            ctx->pc = 0x119CF8u;
            goto label_119cf8;
        }
    }
    ctx->pc = 0x119CE0u;
label_119ce0:
    // 0x119ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119ce4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119ce4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119ce8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119cec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x119cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x119cf0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x119cf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x119cf4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x119cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_119cf8:
    // 0x119cf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119cfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x119cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119d00: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119d04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119D04u;
    {
        const bool branch_taken_0x119d04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D04u;
            // 0x119d08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d04) {
            ctx->pc = 0x119D18u;
            goto label_119d18;
        }
    }
    ctx->pc = 0x119D0Cu;
    // 0x119d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119d10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119D10u;
    {
        const bool branch_taken_0x119d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D10u;
            // 0x119d14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d10) {
            ctx->pc = 0x119D2Cu;
            goto label_119d2c;
        }
    }
    ctx->pc = 0x119D18u;
label_119d18:
    // 0x119d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119d18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x119d1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119d1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119d28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_119d2c:
    // 0x119d2c: 0x0  nop
    ctx->pc = 0x119d2cu;
    // NOP
    // 0x119d30: 0x0  nop
    ctx->pc = 0x119d30u;
    // NOP
    // 0x119d34: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x119d34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x119d38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d3c: 0xc04685a  jal         func_11A168
    ctx->pc = 0x119D3Cu;
    SET_GPR_U32(ctx, 31, 0x119D44u);
    ctx->pc = 0x119D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D3Cu;
            // 0x119d40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A168u;
    if (runtime->hasFunction(0x11A168u)) {
        auto targetFn = runtime->lookupFunction(0x11A168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D44u; }
        if (ctx->pc != 0x119D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Linear_0x11a168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D44u; }
        if (ctx->pc != 0x119D44u) { return; }
    }
    ctx->pc = 0x119D44u;
label_119d44:
    // 0x119d44: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_119d48:
    // 0x119d48: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x119d48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x119d4c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119d50: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x119d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119d54: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x119D54u;
    {
        const bool branch_taken_0x119d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119d54) {
            ctx->pc = 0x119A98u;
            goto label_119a98;
        }
    }
    ctx->pc = 0x119D5Cu;
label_119d5c:
    // 0x119d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x119d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_119d64:
    // 0x119d64: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x119d64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119d68: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119d68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119d6c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119d70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119d74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119d78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119d7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d84: 0x3e00008  jr          $ra
    ctx->pc = 0x119D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D84u;
            // 0x119d88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119A98u: goto label_119a98;
            case 0x119ACCu: goto label_119acc;
            case 0x119ADCu: goto label_119adc;
            case 0x119B24u: goto label_119b24;
            case 0x119B30u: goto label_119b30;
            case 0x119B34u: goto label_119b34;
            case 0x119B54u: goto label_119b54;
            case 0x119B7Cu: goto label_119b7c;
            case 0x119B90u: goto label_119b90;
            case 0x119BB8u: goto label_119bb8;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BF0u: goto label_119bf0;
            case 0x119C04u: goto label_119c04;
            case 0x119C24u: goto label_119c24;
            case 0x119C4Cu: goto label_119c4c;
            case 0x119C64u: goto label_119c64;
            case 0x119C84u: goto label_119c84;
            case 0x119C98u: goto label_119c98;
            case 0x119CB8u: goto label_119cb8;
            case 0x119CE0u: goto label_119ce0;
            case 0x119CF8u: goto label_119cf8;
            case 0x119D18u: goto label_119d18;
            case 0x119D2Cu: goto label_119d2c;
            case 0x119D44u: goto label_119d44;
            case 0x119D48u: goto label_119d48;
            case 0x119D5Cu: goto label_119d5c;
            case 0x119D64u: goto label_119d64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119D8Cu;
}
