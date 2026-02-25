#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5BossMove1
// Address: 0x1c0ca0 - 0x1c1800
void Stage5BossMove1_0x1c0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5BossMove1_0x1c0ca0");
#endif

    ctx->pc = 0x1c0ca0u;

    // 0x1c0ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c0ca4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c0ca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c0cac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c0cb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c0cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c0cbc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0cc0: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c0cc4: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C0CC4u;
    SET_GPR_U32(ctx, 31, 0x1C0CCCu);
    ctx->pc = 0x1C0CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CC4u;
            // 0x1c0cc8: 0xdc25aa58  ld          $a1, -0x55A8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CCCu; }
        if (ctx->pc != 0x1C0CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CCCu; }
        if (ctx->pc != 0x1C0CCCu) { return; }
    }
    ctx->pc = 0x1C0CCCu;
    // 0x1c0ccc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0cd0: 0xac221c58  sw          $v0, 0x1C58($at)
    ctx->pc = 0x1c0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7256), GPR_U32(ctx, 2));
    // 0x1c0cd4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0cd8: 0x8c241c58  lw          $a0, 0x1C58($at)
    ctx->pc = 0x1c0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7256)));
    // 0x1c0cdc: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C0CDCu;
    SET_GPR_U32(ctx, 31, 0x1C0CE4u);
    ctx->pc = 0x1C0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CDCu;
            // 0x1c0ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CE4u; }
        if (ctx->pc != 0x1C0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CE4u; }
        if (ctx->pc != 0x1C0CE4u) { return; }
    }
    ctx->pc = 0x1C0CE4u;
    // 0x1c0ce4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0ce8: 0xac221c60  sw          $v0, 0x1C60($at)
    ctx->pc = 0x1c0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7264), GPR_U32(ctx, 2));
    // 0x1c0cec: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0cf0: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x1c0cf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c0cf4: 0x102001e4  beqz        $at, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x1C0CF4u;
    {
        const bool branch_taken_0x1c0cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CF4u;
            // 0x1c0cf8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0cf4) {
            ctx->pc = 0x1C1488u;
            goto label_1c1488;
        }
    }
    ctx->pc = 0x1C0CFCu;
    // 0x1c0cfc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c0d00: 0x24632ad0  addiu       $v1, $v1, 0x2AD0
    ctx->pc = 0x1c0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10960));
    // 0x1c0d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0d08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0d0c: 0x400008  jr          $v0
    ctx->pc = 0x1C0D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0D18u: goto label_1c0d18;
            case 0x1C0D90u: goto label_1c0d90;
            case 0x1C1488u: goto label_1c1488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0D14u;
    // 0x1c0d14: 0x0  nop
    ctx->pc = 0x1c0d14u;
    // NOP
label_1c0d18:
    // 0x1c0d18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c0d1c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C0D1Cu;
    {
        const bool branch_taken_0x1c0d1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D1Cu;
            // 0x1c0d20: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d1c) {
            ctx->pc = 0x1C0D88u;
            goto label_1c0d88;
        }
    }
    ctx->pc = 0x1C0D24u;
    // 0x1c0d24: 0x8c221c60  lw          $v0, 0x1C60($at)
    ctx->pc = 0x1c0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c0d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d2c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0d34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D34u;
    {
        const bool branch_taken_0x1c0d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D34u;
            // 0x1c0d38: 0x24430018  addiu       $v1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d34) {
            ctx->pc = 0x1C0D58u;
            goto label_1c0d58;
        }
    }
    ctx->pc = 0x1C0D3Cu;
    // 0x1c0d3c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c0d40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c0d40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c0d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d48: 0x0  nop
    ctx->pc = 0x1c0d48u;
    // NOP
    // 0x1c0d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0d50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C0D50u;
    {
        const bool branch_taken_0x1c0d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D50u;
            // 0x1c0d54: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d50) {
            ctx->pc = 0x1C0D88u;
            goto label_1c0d88;
        }
    }
    ctx->pc = 0x1C0D58u;
label_1c0d58:
    // 0x1c0d58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c0d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0d5c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D5Cu;
    {
        const bool branch_taken_0x1c0d5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D5Cu;
            // 0x1c0d60: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d5c) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0D64u;
    // 0x1c0d64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c0d64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c0d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0d6c: 0x0  nop
    ctx->pc = 0x1c0d6cu;
    // NOP
    // 0x1c0d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0d74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0D74u;
    {
        const bool branch_taken_0x1c0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D74u;
            // 0x1c0d78: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d74) {
            ctx->pc = 0x1C0D88u;
            goto label_1c0d88;
        }
    }
    ctx->pc = 0x1C0D7Cu;
    // 0x1c0d7c: 0x0  nop
    ctx->pc = 0x1c0d7cu;
    // NOP
label_1c0d80:
    // 0x1c0d80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c0d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c0d84: 0x0  nop
    ctx->pc = 0x1c0d84u;
    // NOP
label_1c0d88:
    // 0x1c0d88: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x1C0D88u;
    {
        const bool branch_taken_0x1c0d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D88u;
            // 0x1c0d8c: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d88) {
            ctx->pc = 0x1C1488u;
            goto label_1c1488;
        }
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c0d94: 0x1840012a  blez        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x1C0D94u;
    {
        const bool branch_taken_0x1c0d94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D94u;
            // 0x1c0d98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d94) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0D9Cu;
    // 0x1c0d9c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0D9Cu;
    {
        const bool branch_taken_0x1c0d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0d9c) {
            ctx->pc = 0x1C0DB0u;
            goto label_1c0db0;
        }
    }
    ctx->pc = 0x1C0DA4u;
    // 0x1c0da4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0da8: 0x14820041  bne         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C0DA8u;
    {
        const bool branch_taken_0x1c0da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0da8) {
            ctx->pc = 0x1C0EB0u;
            goto label_1c0eb0;
        }
    }
    ctx->pc = 0x1C0DB0u;
label_1c0db0:
    // 0x1c0db0: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c0db4: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c0db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c0db8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0DB8u;
    {
        const bool branch_taken_0x1c0db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db8) {
            ctx->pc = 0x1C0E00u;
            goto label_1c0e00;
        }
    }
    ctx->pc = 0x1C0DC0u;
    // 0x1c0dc0: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0dc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0dc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0dcc: 0x0  nop
    ctx->pc = 0x1c0dccu;
    // NOP
    // 0x1c0dd0: 0x0  nop
    ctx->pc = 0x1c0dd0u;
    // NOP
    // 0x1c0dd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0dd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0dd8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C0DD8u;
    {
        const bool branch_taken_0x1c0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dd8) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0DE0u;
    // 0x1c0de0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0de4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0de8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0dec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0df0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0DF0u;
    SET_GPR_U32(ctx, 31, 0x1C0DF8u);
    ctx->pc = 0x1C0DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DF0u;
            // 0x1c0df4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DF8u; }
        if (ctx->pc != 0x1C0DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DF8u; }
        if (ctx->pc != 0x1C0DF8u) { return; }
    }
    ctx->pc = 0x1C0DF8u;
    // 0x1c0df8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C0DF8u;
    {
        const bool branch_taken_0x1c0df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0df8) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E00u;
label_1c0e00:
    // 0x1c0e00: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c0e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c0e04: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C0E04u;
    {
        const bool branch_taken_0x1c0e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E04u;
            // 0x1c0e08: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e04) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E0Cu;
    // 0x1c0e0c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0E0Cu;
    {
        const bool branch_taken_0x1c0e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e0c) {
            ctx->pc = 0x1C0E58u;
            goto label_1c0e58;
        }
    }
    ctx->pc = 0x1C0E14u;
    // 0x1c0e14: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0e18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0e1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0e1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0e20: 0x0  nop
    ctx->pc = 0x1c0e20u;
    // NOP
    // 0x1c0e24: 0x0  nop
    ctx->pc = 0x1c0e24u;
    // NOP
    // 0x1c0e28: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0e2c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C0E2Cu;
    {
        const bool branch_taken_0x1c0e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e2c) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E34u;
    // 0x1c0e34: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0e38: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0e3c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e40: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0e44: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0E44u;
    SET_GPR_U32(ctx, 31, 0x1C0E4Cu);
    ctx->pc = 0x1C0E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E44u;
            // 0x1c0e48: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E4Cu; }
        if (ctx->pc != 0x1C0E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E4Cu; }
        if (ctx->pc != 0x1C0E4Cu) { return; }
    }
    ctx->pc = 0x1C0E4Cu;
    // 0x1c0e4c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C0E4Cu;
    {
        const bool branch_taken_0x1c0e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e4c) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E54u;
    // 0x1c0e54: 0x0  nop
    ctx->pc = 0x1c0e54u;
    // NOP
label_1c0e58:
    // 0x1c0e58: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c0e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c0e5c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C0E5Cu;
    {
        const bool branch_taken_0x1c0e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E5Cu;
            // 0x1c0e60: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e5c) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E64u;
    // 0x1c0e64: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C0E64u;
    {
        const bool branch_taken_0x1c0e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e64) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E6Cu;
    // 0x1c0e6c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0e70: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0e74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0e74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0e78: 0x0  nop
    ctx->pc = 0x1c0e78u;
    // NOP
    // 0x1c0e7c: 0x0  nop
    ctx->pc = 0x1c0e7cu;
    // NOP
    // 0x1c0e80: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0e80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0e84: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0E84u;
    {
        const bool branch_taken_0x1c0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e84) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0e90: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0e94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0e9c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0EA4u);
    ctx->pc = 0x1C0EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E9Cu;
            // 0x1c0ea0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EA4u; }
        if (ctx->pc != 0x1C0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EA4u; }
        if (ctx->pc != 0x1C0EA4u) { return; }
    }
    ctx->pc = 0x1C0EA4u;
    // 0x1c0ea4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0EA4u;
    {
        const bool branch_taken_0x1c0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ea4) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0EACu;
    // 0x1c0eac: 0x0  nop
    ctx->pc = 0x1c0eacu;
    // NOP
label_1c0eb0:
    // 0x1c0eb0: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0eb4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0eb8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0eb8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0ebc: 0x0  nop
    ctx->pc = 0x1c0ebcu;
    // NOP
    // 0x1c0ec0: 0x0  nop
    ctx->pc = 0x1c0ec0u;
    // NOP
    // 0x1c0ec4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0ec4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0ec8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0EC8u;
    {
        const bool branch_taken_0x1c0ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ec8) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0ED0u;
    // 0x1c0ed0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0ed4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0ed8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0edc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0ee0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0EE0u;
    SET_GPR_U32(ctx, 31, 0x1C0EE8u);
    ctx->pc = 0x1C0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EE0u;
            // 0x1c0ee4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EE8u; }
        if (ctx->pc != 0x1C0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EE8u; }
        if (ctx->pc != 0x1C0EE8u) { return; }
    }
    ctx->pc = 0x1C0EE8u;
label_1c0ee8:
    // 0x1c0ee8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0ef0: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C0EF0u;
    {
        const bool branch_taken_0x1c0ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0ef0) {
            ctx->pc = 0x1C0F98u;
            goto label_1c0f98;
        }
    }
    ctx->pc = 0x1C0EF8u;
    // 0x1c0ef8: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c0efc: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c0efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c0f00: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0F00u;
    {
        const bool branch_taken_0x1c0f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F00u;
            // 0x1c0f04: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f00) {
            ctx->pc = 0x1C0F28u;
            goto label_1c0f28;
        }
    }
    ctx->pc = 0x1C0F08u;
    // 0x1c0f08: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c0f0c: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0f10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c0f10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c0f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0f18: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f20: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1C0F20u;
    {
        const bool branch_taken_0x1c0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F20u;
            // 0x1c0f24: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f20) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F28u;
label_1c0f28:
    // 0x1c0f28: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c0f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c0f2c: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1C0F2Cu;
    {
        const bool branch_taken_0x1c0f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F2Cu;
            // 0x1c0f30: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f2c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F34u;
    // 0x1c0f34: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0F34u;
    {
        const bool branch_taken_0x1c0f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f34) {
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F3Cu;
    // 0x1c0f3c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0f40: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0f44: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0f48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c0f48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0f50: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f58: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1C0F58u;
    {
        const bool branch_taken_0x1c0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F58u;
            // 0x1c0f5c: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f58) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F60u;
label_1c0f60:
    // 0x1c0f60: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c0f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c0f64: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1C0F64u;
    {
        const bool branch_taken_0x1c0f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F64u;
            // 0x1c0f68: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f64) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F6Cu;
    // 0x1c0f6c: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C0F6Cu;
    {
        const bool branch_taken_0x1c0f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f6c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F74u;
    // 0x1c0f74: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0f78: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0f7c: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0f80: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c0f80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0f88: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f90: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1C0F90u;
    {
        const bool branch_taken_0x1c0f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F90u;
            // 0x1c0f94: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f90) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0F98u;
label_1c0f98:
    // 0x1c0f98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0f9c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C0F9Cu;
    {
        const bool branch_taken_0x1c0f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0f9c) {
            ctx->pc = 0x1C1048u;
            goto label_1c1048;
        }
    }
    ctx->pc = 0x1C0FA4u;
    // 0x1c0fa4: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c0fa8: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c0fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c0fac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0FACu;
    {
        const bool branch_taken_0x1c0fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FACu;
            // 0x1c0fb0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fac) {
            ctx->pc = 0x1C0FD8u;
            goto label_1c0fd8;
        }
    }
    ctx->pc = 0x1C0FB4u;
    // 0x1c0fb4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c0fb8: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0fbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c0fbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c0fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0fc4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0fc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0fcc: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1C0FCCu;
    {
        const bool branch_taken_0x1c0fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FCCu;
            // 0x1c0fd0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fcc) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0FD4u;
    // 0x1c0fd4: 0x0  nop
    ctx->pc = 0x1c0fd4u;
    // NOP
label_1c0fd8:
    // 0x1c0fd8: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c0fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c0fdc: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1C0FDCu;
    {
        const bool branch_taken_0x1c0fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FDCu;
            // 0x1c0fe0: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fdc) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C0FE4u;
    // 0x1c0fe4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0FE4u;
    {
        const bool branch_taken_0x1c0fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fe4) {
            ctx->pc = 0x1C1010u;
            goto label_1c1010;
        }
    }
    ctx->pc = 0x1C0FECu;
    // 0x1c0fec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0ff0: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0ff4: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c0ff8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c0ff8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1000: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1004: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c1008: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1C1008u;
    {
        const bool branch_taken_0x1c1008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1008u;
            // 0x1c100c: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1008) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1010u;
label_1c1010:
    // 0x1c1010: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c1010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c1014: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1C1014u;
    {
        const bool branch_taken_0x1c1014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1014u;
            // 0x1c1018: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1014) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C101Cu;
    // 0x1c101c: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C101Cu;
    {
        const bool branch_taken_0x1c101c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c101c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1024u;
    // 0x1c1024: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1028: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c1028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c102c: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c1030: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c1030u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c1034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1038: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c103c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c103cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1040: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C1040u;
    {
        const bool branch_taken_0x1c1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1040u;
            // 0x1c1044: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1040) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1048u;
label_1c1048:
    // 0x1c1048: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c1048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c104c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C104Cu;
    {
        const bool branch_taken_0x1c104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c104c) {
            ctx->pc = 0x1C1148u;
            goto label_1c1148;
        }
    }
    ctx->pc = 0x1C1054u;
    // 0x1c1054: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c1054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c1058: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1c1058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c105c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C105Cu;
    {
        const bool branch_taken_0x1c105c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C105Cu;
            // 0x1c1060: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c105c) {
            ctx->pc = 0x1C1088u;
            goto label_1c1088;
        }
    }
    ctx->pc = 0x1C1064u;
    // 0x1c1064: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c1068: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c106c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c106cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c1070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1074: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c107c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1C107Cu;
    {
        const bool branch_taken_0x1c107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C107Cu;
            // 0x1c1080: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c107c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1084u;
    // 0x1c1084: 0x0  nop
    ctx->pc = 0x1c1084u;
    // NOP
label_1c1088:
    // 0x1c1088: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x1c1088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c108c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C108Cu;
    {
        const bool branch_taken_0x1c108c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C108Cu;
            // 0x1c1090: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c108c) {
            ctx->pc = 0x1C10B8u;
            goto label_1c10b8;
        }
    }
    ctx->pc = 0x1C1094u;
    // 0x1c1094: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c1094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c1098: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c109c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c109cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c10a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c10a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c10ac: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C10ACu;
    {
        const bool branch_taken_0x1c10ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10ACu;
            // 0x1c10b0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10ac) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C10B4u;
    // 0x1c10b4: 0x0  nop
    ctx->pc = 0x1c10b4u;
    // NOP
label_1c10b8:
    // 0x1c10b8: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1c10b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c10bc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C10BCu;
    {
        const bool branch_taken_0x1c10bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10BCu;
            // 0x1c10c0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10bc) {
            ctx->pc = 0x1C10E8u;
            goto label_1c10e8;
        }
    }
    ctx->pc = 0x1C10C4u;
    // 0x1c10c4: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c10c8: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c10cc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c10ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c10d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c10d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c10d4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c10d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c10d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c10dc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1C10DCu;
    {
        const bool branch_taken_0x1c10dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10DCu;
            // 0x1c10e0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10dc) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C10E4u;
    // 0x1c10e4: 0x0  nop
    ctx->pc = 0x1c10e4u;
    // NOP
label_1c10e8:
    // 0x1c10e8: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x1c10e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c10ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C10ECu;
    {
        const bool branch_taken_0x1c10ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10ECu;
            // 0x1c10f0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10ec) {
            ctx->pc = 0x1C1118u;
            goto label_1c1118;
        }
    }
    ctx->pc = 0x1C10F4u;
    // 0x1c10f4: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c10f8: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c10fc: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c10fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c1100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1104: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c110c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1C110Cu;
    {
        const bool branch_taken_0x1c110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C110Cu;
            // 0x1c1110: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c110c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1114u;
    // 0x1c1114: 0x0  nop
    ctx->pc = 0x1c1114u;
    // NOP
label_1c1118:
    // 0x1c1118: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x1c1118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x1c111c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C111Cu;
    {
        const bool branch_taken_0x1c111c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C111Cu;
            // 0x1c1120: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c111c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1124u;
    // 0x1c1124: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c1128: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c112c: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c112cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c1130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1134: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1138: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c113c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C113Cu;
    {
        const bool branch_taken_0x1c113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C113Cu;
            // 0x1c1140: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c113c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1144u;
    // 0x1c1144: 0x0  nop
    ctx->pc = 0x1c1144u;
    // NOP
label_1c1148:
    // 0x1c1148: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c114c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C114Cu;
    {
        const bool branch_taken_0x1c114c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c114c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1154u;
    // 0x1c1154: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c1158: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1c1158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c115c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C115Cu;
    {
        const bool branch_taken_0x1c115c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C115Cu;
            // 0x1c1160: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c115c) {
            ctx->pc = 0x1C1188u;
            goto label_1c1188;
        }
    }
    ctx->pc = 0x1C1164u;
    // 0x1c1164: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c1168: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c116c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c116cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c1170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1174: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c117c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C117Cu;
    {
        const bool branch_taken_0x1c117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C117Cu;
            // 0x1c1180: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c117c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1184u;
    // 0x1c1184: 0x0  nop
    ctx->pc = 0x1c1184u;
    // NOP
label_1c1188:
    // 0x1c1188: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x1c1188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c118c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C118Cu;
    {
        const bool branch_taken_0x1c118c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C118Cu;
            // 0x1c1190: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c118c) {
            ctx->pc = 0x1C11B8u;
            goto label_1c11b8;
        }
    }
    ctx->pc = 0x1C1194u;
    // 0x1c1194: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c1194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c1198: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c119c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c119cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c11a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c11a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c11a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c11a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c11a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c11a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c11ac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C11ACu;
    {
        const bool branch_taken_0x1c11ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11ACu;
            // 0x1c11b0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11ac) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C11B4u;
    // 0x1c11b4: 0x0  nop
    ctx->pc = 0x1c11b4u;
    // NOP
label_1c11b8:
    // 0x1c11b8: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1c11b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c11bc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C11BCu;
    {
        const bool branch_taken_0x1c11bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11BCu;
            // 0x1c11c0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11bc) {
            ctx->pc = 0x1C11E8u;
            goto label_1c11e8;
        }
    }
    ctx->pc = 0x1C11C4u;
    // 0x1c11c4: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c11c8: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c11cc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c11ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c11d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c11d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c11d4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c11d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c11d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c11d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c11dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C11DCu;
    {
        const bool branch_taken_0x1c11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11DCu;
            // 0x1c11e0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11dc) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C11E4u;
    // 0x1c11e4: 0x0  nop
    ctx->pc = 0x1c11e4u;
    // NOP
label_1c11e8:
    // 0x1c11e8: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x1c11e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c11ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C11ECu;
    {
        const bool branch_taken_0x1c11ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11ECu;
            // 0x1c11f0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11ec) {
            ctx->pc = 0x1C1218u;
            goto label_1c1218;
        }
    }
    ctx->pc = 0x1C11F4u;
    // 0x1c11f4: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c11f8: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c11fc: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c11fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c1200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1204: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c120c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C120Cu;
    {
        const bool branch_taken_0x1c120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C120Cu;
            // 0x1c1210: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c120c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1214u;
    // 0x1c1214: 0x0  nop
    ctx->pc = 0x1c1214u;
    // NOP
label_1c1218:
    // 0x1c1218: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x1c1218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x1c121c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C121Cu;
    {
        const bool branch_taken_0x1c121c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C121Cu;
            // 0x1c1220: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c121c) {
            ctx->pc = 0x1C1240u;
            goto label_1c1240;
        }
    }
    ctx->pc = 0x1C1224u;
    // 0x1c1224: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c1224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c1228: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c122c: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c122cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c1230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1234: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1238: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c123c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1c1240:
    // 0x1c1240: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c1244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1248: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x1c1248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x1c124c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c1250: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c1254: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C1488u;
            goto label_1c1488;
        }
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c1260: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1264: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1264u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1268: 0x0  nop
    ctx->pc = 0x1c1268u;
    // NOP
    // 0x1c126c: 0x0  nop
    ctx->pc = 0x1c126cu;
    // NOP
    // 0x1c1270: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1270u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1274: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C1274u;
    {
        const bool branch_taken_0x1c1274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1274u;
            // 0x1c1278: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1274) {
            ctx->pc = 0x1C1488u;
            goto label_1c1488;
        }
    }
    ctx->pc = 0x1C127Cu;
    // 0x1c127c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1c1280: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c1284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1288: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1c128c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c128cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1290: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1c1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1294: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c1294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c1298: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c1298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c129c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c129cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c12a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c12a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c12a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c12a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c12a8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1c12a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1c12ac: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C12ACu;
    SET_GPR_U32(ctx, 31, 0x1C12B4u);
    ctx->pc = 0x1C12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12ACu;
            // 0x1c12b0: 0x24500005  addiu       $s0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12B4u; }
        if (ctx->pc != 0x1C12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12B4u; }
        if (ctx->pc != 0x1C12B4u) { return; }
    }
    ctx->pc = 0x1C12B4u;
    // 0x1c12b4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c12b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c12b8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1C12B8u;
    {
        const bool branch_taken_0x1c12b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c12b8) {
            ctx->pc = 0x1C12F8u;
            goto label_1c12f8;
        }
    }
    ctx->pc = 0x1C12C0u;
    // 0x1c12c0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c12c4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c12c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c12c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c12cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c12ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c12d4: 0x2463ff67  addiu       $v1, $v1, -0x99
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967143));
    // 0x1c12d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c12d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c12dc: 0x0  nop
    ctx->pc = 0x1c12dcu;
    // NOP
    // 0x1c12e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c12e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c12e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c12e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c12e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c12e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c12ec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c12ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c12f0: 0xc065480  jal         func_195200
    ctx->pc = 0x1C12F0u;
    SET_GPR_U32(ctx, 31, 0x1C12F8u);
    ctx->pc = 0x1C12F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12F0u;
            // 0x1c12f4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12F8u; }
        if (ctx->pc != 0x1C12F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12F8u; }
        if (ctx->pc != 0x1C12F8u) { return; }
    }
    ctx->pc = 0x1C12F8u;
label_1c12f8:
    // 0x1c12f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C12F8u;
    SET_GPR_U32(ctx, 31, 0x1C1300u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1300u; }
        if (ctx->pc != 0x1C1300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1300u; }
        if (ctx->pc != 0x1C1300u) { return; }
    }
    ctx->pc = 0x1C1300u;
    // 0x1c1300: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C1300u;
    {
        const bool branch_taken_0x1c1300 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c1300) {
            ctx->pc = 0x1C1378u;
            goto label_1c1378;
        }
    }
    ctx->pc = 0x1C1308u;
    // 0x1c1308: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c130c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c1310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1318: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c131c: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c1320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1324: 0x0  nop
    ctx->pc = 0x1c1324u;
    // NOP
    // 0x1c1328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c132c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c132cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c1334: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c1334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c1338: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1338u;
    SET_GPR_U32(ctx, 31, 0x1C1340u);
    ctx->pc = 0x1C133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1338u;
            // 0x1c133c: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1340u; }
        if (ctx->pc != 0x1C1340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1340u; }
        if (ctx->pc != 0x1C1340u) { return; }
    }
    ctx->pc = 0x1C1340u;
    // 0x1c1340: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1344: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c1348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c134c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1350: 0x2606fff8  addiu       $a2, $s0, -0x8
    ctx->pc = 0x1c1350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c1354: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c1358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c135c: 0x0  nop
    ctx->pc = 0x1c135cu;
    // NOP
    // 0x1c1360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1364: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c1364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c136c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c136cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c1370: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1370u;
    SET_GPR_U32(ctx, 31, 0x1C1378u);
    ctx->pc = 0x1C1374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1370u;
            // 0x1c1374: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1378u; }
        if (ctx->pc != 0x1C1378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1378u; }
        if (ctx->pc != 0x1C1378u) { return; }
    }
    ctx->pc = 0x1C1378u;
label_1c1378:
    // 0x1c1378: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c1378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c137c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c1380: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1388: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1c1388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c138c: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c1390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1394: 0x0  nop
    ctx->pc = 0x1c1394u;
    // NOP
    // 0x1c1398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c139c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c139cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c13a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c13a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c13a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c13a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c13a8: 0xc065480  jal         func_195200
    ctx->pc = 0x1C13A8u;
    SET_GPR_U32(ctx, 31, 0x1C13B0u);
    ctx->pc = 0x1C13ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13A8u;
            // 0x1c13ac: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13B0u; }
        if (ctx->pc != 0x1C13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13B0u; }
        if (ctx->pc != 0x1C13B0u) { return; }
    }
    ctx->pc = 0x1C13B0u;
    // 0x1c13b0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c13b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c13b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c13b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c13bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c13c0: 0x2606fff0  addiu       $a2, $s0, -0x10
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1c13c4: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c13c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c13c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c13cc: 0x0  nop
    ctx->pc = 0x1c13ccu;
    // NOP
    // 0x1c13d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c13d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c13d4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c13d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c13d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c13d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c13dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c13dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c13e0: 0xc065480  jal         func_195200
    ctx->pc = 0x1C13E0u;
    SET_GPR_U32(ctx, 31, 0x1C13E8u);
    ctx->pc = 0x1C13E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13E0u;
            // 0x1c13e4: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13E8u; }
        if (ctx->pc != 0x1C13E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13E8u; }
        if (ctx->pc != 0x1C13E8u) { return; }
    }
    ctx->pc = 0x1C13E8u;
    // 0x1c13e8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c13ec: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c13f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c13f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c13f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c13f8: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x1c13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c13fc: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c1400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1404: 0x0  nop
    ctx->pc = 0x1c1404u;
    // NOP
    // 0x1c1408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c140c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c140cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c1414: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c1414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c1418: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1418u;
    SET_GPR_U32(ctx, 31, 0x1C1420u);
    ctx->pc = 0x1C141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1418u;
            // 0x1c141c: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1420u; }
        if (ctx->pc != 0x1C1420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1420u; }
        if (ctx->pc != 0x1C1420u) { return; }
    }
    ctx->pc = 0x1C1420u;
    // 0x1c1420: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1424: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c1424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c1428: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c142c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1430: 0x2606ffe8  addiu       $a2, $s0, -0x18
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1c1434: 0x2482ff67  addiu       $v0, $a0, -0x99
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967143));
    // 0x1c1438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c143c: 0x0  nop
    ctx->pc = 0x1c143cu;
    // NOP
    // 0x1c1440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1444: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c1444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1448: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c144c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c144cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c1450: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1450u;
    SET_GPR_U32(ctx, 31, 0x1C1458u);
    ctx->pc = 0x1C1454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1450u;
            // 0x1c1454: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1458u; }
        if (ctx->pc != 0x1C1458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1458u; }
        if (ctx->pc != 0x1C1458u) { return; }
    }
    ctx->pc = 0x1C1458u;
    // 0x1c1458: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c145c: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1c145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c1460: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1464: 0x2463ff67  addiu       $v1, $v1, -0x99
    ctx->pc = 0x1c1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967143));
    // 0x1c1468: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c1468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c146c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1c1470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1474: 0x0  nop
    ctx->pc = 0x1c1474u;
    // NOP
    // 0x1c1478: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c147c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1c147cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1c1480: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C1480u;
    SET_GPR_U32(ctx, 31, 0x1C1488u);
    ctx->pc = 0x1C1484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1480u;
            // 0x1c1484: 0x46140b01  sub.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1488u; }
        if (ctx->pc != 0x1C1488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1488u; }
        if (ctx->pc != 0x1C1488u) { return; }
    }
    ctx->pc = 0x1C1488u;
label_1c1488:
    // 0x1c1488: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c148c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c1490: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c1490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1494: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c1494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c1498: 0xc071024  jal         func_1C4090
    ctx->pc = 0x1C1498u;
    SET_GPR_U32(ctx, 31, 0x1C14A0u);
    ctx->pc = 0x1C149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1498u;
            // 0x1c149c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4090u;
    if (runtime->hasFunction(0x1C4090u)) {
        auto targetFn = runtime->lookupFunction(0x1C4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14A0u; }
        if (ctx->pc != 0x1C14A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14A0u; }
        if (ctx->pc != 0x1C14A0u) { return; }
    }
    ctx->pc = 0x1C14A0u;
    // 0x1c14a0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c14a4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1c14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1c14a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c14ac: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1c14acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1c14b0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C14B0u;
    SET_GPR_U32(ctx, 31, 0x1C14B8u);
    ctx->pc = 0x1C14B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14B0u;
            // 0x1c14b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B8u; }
        if (ctx->pc != 0x1C14B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B8u; }
        if (ctx->pc != 0x1C14B8u) { return; }
    }
    ctx->pc = 0x1C14B8u;
    // 0x1c14b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c14bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c14c0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C14C0u;
    SET_GPR_U32(ctx, 31, 0x1C14C8u);
    ctx->pc = 0x1C14C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14C0u;
            // 0x1c14c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14C8u; }
        if (ctx->pc != 0x1C14C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14C8u; }
        if (ctx->pc != 0x1C14C8u) { return; }
    }
    ctx->pc = 0x1C14C8u;
    // 0x1c14c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c14cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c14ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c14d0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C14D0u;
    SET_GPR_U32(ctx, 31, 0x1C14D8u);
    ctx->pc = 0x1C14D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14D0u;
            // 0x1c14d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14D8u; }
        if (ctx->pc != 0x1C14D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14D8u; }
        if (ctx->pc != 0x1C14D8u) { return; }
    }
    ctx->pc = 0x1C14D8u;
    // 0x1c14d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c14d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c14dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c14dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c14e0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C14E0u;
    SET_GPR_U32(ctx, 31, 0x1C14E8u);
    ctx->pc = 0x1C14E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14E0u;
            // 0x1c14e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E8u; }
        if (ctx->pc != 0x1C14E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E8u; }
        if (ctx->pc != 0x1C14E8u) { return; }
    }
    ctx->pc = 0x1C14E8u;
    // 0x1c14e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c14ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c14ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14f0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C14F0u;
    SET_GPR_U32(ctx, 31, 0x1C14F8u);
    ctx->pc = 0x1C14F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14F0u;
            // 0x1c14f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F8u; }
        if (ctx->pc != 0x1C14F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F8u; }
        if (ctx->pc != 0x1C14F8u) { return; }
    }
    ctx->pc = 0x1C14F8u;
    // 0x1c14f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c14fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c1500: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c1500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c1504: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1504u;
    {
        const bool branch_taken_0x1c1504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1504) {
            ctx->pc = 0x1C1558u;
            goto label_1c1558;
        }
    }
    ctx->pc = 0x1C150Cu;
    // 0x1c150c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1c150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1c1510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1510u;
    {
        const bool branch_taken_0x1c1510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1510) {
            ctx->pc = 0x1C1528u;
            goto label_1c1528;
        }
    }
    ctx->pc = 0x1C1518u;
    // 0x1c1518: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C1518u;
    SET_GPR_U32(ctx, 31, 0x1C1520u);
    ctx->pc = 0x1C151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1518u;
            // 0x1c151c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1520u; }
        if (ctx->pc != 0x1C1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1520u; }
        if (ctx->pc != 0x1C1520u) { return; }
    }
    ctx->pc = 0x1C1520u;
    // 0x1c1520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1520u;
    {
        const bool branch_taken_0x1c1520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1520) {
            ctx->pc = 0x1C1530u;
            goto label_1c1530;
        }
    }
    ctx->pc = 0x1C1528u;
label_1c1528:
    // 0x1c1528: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C1528u;
    SET_GPR_U32(ctx, 31, 0x1C1530u);
    ctx->pc = 0x1C152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1528u;
            // 0x1c152c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1530u; }
        if (ctx->pc != 0x1C1530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1530u; }
        if (ctx->pc != 0x1C1530u) { return; }
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1c1534: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1534u;
    {
        const bool branch_taken_0x1c1534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1534) {
            ctx->pc = 0x1C1548u;
            goto label_1c1548;
        }
    }
    ctx->pc = 0x1C153Cu;
    // 0x1c153c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C153Cu;
    {
        const bool branch_taken_0x1c153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C153Cu;
            // 0x1c1540: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c153c) {
            ctx->pc = 0x1C1568u;
            goto label_1c1568;
        }
    }
    ctx->pc = 0x1C1544u;
    // 0x1c1544: 0x0  nop
    ctx->pc = 0x1c1544u;
    // NOP
label_1c1548:
    // 0x1c1548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c154c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C154Cu;
    {
        const bool branch_taken_0x1c154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C154Cu;
            // 0x1c1550: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c154c) {
            ctx->pc = 0x1C1568u;
            goto label_1c1568;
        }
    }
    ctx->pc = 0x1C1554u;
    // 0x1c1554: 0x0  nop
    ctx->pc = 0x1c1554u;
    // NOP
label_1c1558:
    // 0x1c1558: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C1558u;
    SET_GPR_U32(ctx, 31, 0x1C1560u);
    ctx->pc = 0x1C155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1558u;
            // 0x1c155c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1560u; }
        if (ctx->pc != 0x1C1560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1560u; }
        if (ctx->pc != 0x1C1560u) { return; }
    }
    ctx->pc = 0x1C1560u;
    // 0x1c1560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1564: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x1c1564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_1c1568:
    // 0x1c1568: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c156c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1c156cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1c1570: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c1574: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C1574u;
    {
        const bool branch_taken_0x1c1574 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c1574) {
            ctx->pc = 0x1C15D8u;
            goto label_1c15d8;
        }
    }
    ctx->pc = 0x1C157Cu;
    // 0x1c157c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c1580: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1584: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1588: 0x0  nop
    ctx->pc = 0x1c1588u;
    // NOP
    // 0x1c158c: 0x0  nop
    ctx->pc = 0x1c158cu;
    // NOP
    // 0x1c1590: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1590u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1594: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1594u;
    {
        const bool branch_taken_0x1c1594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1594) {
            ctx->pc = 0x1C15B8u;
            goto label_1c15b8;
        }
    }
    ctx->pc = 0x1C159Cu;
    // 0x1c159c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c15a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1c15a4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1c15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c15a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c15a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c15ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c15acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c15b0: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C15B0u;
    SET_GPR_U32(ctx, 31, 0x1C15B8u);
    ctx->pc = 0x1C15B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15B0u;
            // 0x1c15b4: 0x2464ffa2  addiu       $a0, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15B8u; }
        if (ctx->pc != 0x1C15B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15B8u; }
        if (ctx->pc != 0x1C15B8u) { return; }
    }
    ctx->pc = 0x1C15B8u;
label_1c15b8:
    // 0x1c15b8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1c15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c15bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c15c0: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x1c15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x1c15c4: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x1c15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c15c8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C15C8u;
    SET_GPR_U32(ctx, 31, 0x1C15D0u);
    ctx->pc = 0x1C15CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15C8u;
            // 0x1c15cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D0u; }
        if (ctx->pc != 0x1C15D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D0u; }
        if (ctx->pc != 0x1C15D0u) { return; }
    }
    ctx->pc = 0x1C15D0u;
    // 0x1c15d0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C15D0u;
    {
        const bool branch_taken_0x1c15d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15d0) {
            ctx->pc = 0x1C17D0u;
            goto label_1c17d0;
        }
    }
    ctx->pc = 0x1C15D8u;
label_1c15d8:
    // 0x1c15d8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1c15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c15dc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c15e0: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1C15E0u;
    {
        const bool branch_taken_0x1c15e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15E0u;
            // 0x1c15e4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15e0) {
            ctx->pc = 0x1C17D0u;
            goto label_1c17d0;
        }
    }
    ctx->pc = 0x1C15E8u;
    // 0x1c15e8: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C15E8u;
    {
        const bool branch_taken_0x1c15e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C15ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15E8u;
            // 0x1c15ec: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15e8) {
            ctx->pc = 0x1C17D0u;
            goto label_1c17d0;
        }
    }
    ctx->pc = 0x1C15F0u;
    // 0x1c15f0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1c15f4: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c15f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c15f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c15fc: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c15fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c1600: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1604: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1608: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x1c1608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1c160c: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c1610: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1614: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c1614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1618: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c161c: 0x2442ff56  addiu       $v0, $v0, -0xAA
    ctx->pc = 0x1c161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967126));
    // 0x1c1620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1624: 0x0  nop
    ctx->pc = 0x1c1624u;
    // NOP
    // 0x1c1628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c162c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c162cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c1630: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c1634: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1638: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c1638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c163c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1c163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1c1640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1644: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c1648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c164c: 0x0  nop
    ctx->pc = 0x1c164cu;
    // NOP
    // 0x1c1650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1654: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1c1654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1c1658: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c165c: 0x2442ff74  addiu       $v0, $v0, -0x8C
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967156));
    // 0x1c1660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1664: 0x0  nop
    ctx->pc = 0x1c1664u;
    // NOP
    // 0x1c1668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c166c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c166cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c1670: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1c1670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1c1674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c1674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1678: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c1678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c167c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c167cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1680: 0x0  nop
    ctx->pc = 0x1c1680u;
    // NOP
    // 0x1c1684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1688: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C1688u;
    SET_GPR_U32(ctx, 31, 0x1C1690u);
    ctx->pc = 0x1C168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1688u;
            // 0x1c168c: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1690u; }
        if (ctx->pc != 0x1C1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1690u; }
        if (ctx->pc != 0x1C1690u) { return; }
    }
    ctx->pc = 0x1C1690u;
    // 0x1c1690: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1694: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c1698: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c169c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c169cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c16a0: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c16a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c16a8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c16ac: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x1c16acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1c16b0: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c16b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c16b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c16b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c16c0: 0x2442ff4c  addiu       $v0, $v0, -0xB4
    ctx->pc = 0x1c16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967116));
    // 0x1c16c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c16c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c16c8: 0x0  nop
    ctx->pc = 0x1c16c8u;
    // NOP
    // 0x1c16cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c16ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c16d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c16d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c16d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c16d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c16d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c16d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c16dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c16dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c16e0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c16e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1c16e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c16e8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c16ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c16ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c16f0: 0x0  nop
    ctx->pc = 0x1c16f0u;
    // NOP
    // 0x1c16f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c16f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c16f8: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x1c16f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1c16fc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1700: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1c1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1c1704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1708: 0x0  nop
    ctx->pc = 0x1c1708u;
    // NOP
    // 0x1c170c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c170cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1710: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c1710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c1714: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x1c1714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1c1718: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c171c: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1c171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1c1720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1724: 0x0  nop
    ctx->pc = 0x1c1724u;
    // NOP
    // 0x1c1728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c172c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C172Cu;
    SET_GPR_U32(ctx, 31, 0x1C1734u);
    ctx->pc = 0x1C1730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C172Cu;
            // 0x1c1730: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1734u; }
        if (ctx->pc != 0x1C1734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1734u; }
        if (ctx->pc != 0x1C1734u) { return; }
    }
    ctx->pc = 0x1C1734u;
    // 0x1c1734: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1738: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c1738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1c173c: 0x8c231c60  lw          $v1, 0x1C60($at)
    ctx->pc = 0x1c173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7264)));
    // 0x1c1740: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1744: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c1748: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c1748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c174c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1750: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1c1754: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c1754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c1758: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c175cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1760: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c1760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1764: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x1c1764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1c1768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c176c: 0x0  nop
    ctx->pc = 0x1c176cu;
    // NOP
    // 0x1c1770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1774: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c1774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c1778: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c177c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c177cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c1784: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1c1784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1c1788: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c178c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1c178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1c1790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1794: 0x0  nop
    ctx->pc = 0x1c1794u;
    // NOP
    // 0x1c1798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c179c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1c179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1c17a0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c17a4: 0x2442ff92  addiu       $v0, $v0, -0x6E
    ctx->pc = 0x1c17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967186));
    // 0x1c17a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c17a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c17ac: 0x0  nop
    ctx->pc = 0x1c17acu;
    // NOP
    // 0x1c17b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c17b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c17b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c17b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c17b8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1c17b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x1c17bc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c17c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c17c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c17c4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C17C4u;
    SET_GPR_U32(ctx, 31, 0x1C17CCu);
    ctx->pc = 0x1C17C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17C4u;
            // 0x1c17c8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17CCu; }
        if (ctx->pc != 0x1C17CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17CCu; }
        if (ctx->pc != 0x1C17CCu) { return; }
    }
    ctx->pc = 0x1C17CCu;
    // 0x1c17cc: 0x0  nop
    ctx->pc = 0x1c17ccu;
    // NOP
label_1c17d0:
    // 0x1c17d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c17d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c17d8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1c17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1c17dc: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c17e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c17e4: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x1c17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    // 0x1c17e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c17e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c17ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c17f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c17f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c17f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c17f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c17f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C17F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17F8u;
            // 0x1c17fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0D18u: goto label_1c0d18;
            case 0x1C0D58u: goto label_1c0d58;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D88u: goto label_1c0d88;
            case 0x1C0D90u: goto label_1c0d90;
            case 0x1C0DB0u: goto label_1c0db0;
            case 0x1C0E00u: goto label_1c0e00;
            case 0x1C0E58u: goto label_1c0e58;
            case 0x1C0EB0u: goto label_1c0eb0;
            case 0x1C0EE8u: goto label_1c0ee8;
            case 0x1C0F28u: goto label_1c0f28;
            case 0x1C0F60u: goto label_1c0f60;
            case 0x1C0F98u: goto label_1c0f98;
            case 0x1C0FD8u: goto label_1c0fd8;
            case 0x1C1010u: goto label_1c1010;
            case 0x1C1048u: goto label_1c1048;
            case 0x1C1088u: goto label_1c1088;
            case 0x1C10B8u: goto label_1c10b8;
            case 0x1C10E8u: goto label_1c10e8;
            case 0x1C1118u: goto label_1c1118;
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1188u: goto label_1c1188;
            case 0x1C11B8u: goto label_1c11b8;
            case 0x1C11E8u: goto label_1c11e8;
            case 0x1C1218u: goto label_1c1218;
            case 0x1C1240u: goto label_1c1240;
            case 0x1C12F8u: goto label_1c12f8;
            case 0x1C1378u: goto label_1c1378;
            case 0x1C1488u: goto label_1c1488;
            case 0x1C1528u: goto label_1c1528;
            case 0x1C1530u: goto label_1c1530;
            case 0x1C1548u: goto label_1c1548;
            case 0x1C1558u: goto label_1c1558;
            case 0x1C1568u: goto label_1c1568;
            case 0x1C15B8u: goto label_1c15b8;
            case 0x1C15D8u: goto label_1c15d8;
            case 0x1C17D0u: goto label_1c17d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1800u;
}
