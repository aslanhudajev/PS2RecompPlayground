#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeGeometryPacket
// Address: 0x117df8 - 0x1180a0
void ShapeMakeGeometryPacket_0x117df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeGeometryPacket_0x117df8");
#endif

    ctx->pc = 0x117df8u;

label_117df8:
    // 0x117df8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x117df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_117dfc:
    // 0x117dfc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x117dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_117e00:
    // 0x117e00: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x117e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_117e04:
    // 0x117e04: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x117e04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_117e08:
    // 0x117e08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x117e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_117e0c:
    // 0x117e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117e10:
    // 0x117e10: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x117e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_117e14:
    // 0x117e14: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x117e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_117e18:
    // 0x117e18: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_117e1c:
    // 0x117e1c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x117e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_117e20:
    // 0x117e20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x117e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_117e24:
    // 0x117e24: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x117e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_117e28:
    // 0x117e28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x117e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_117e2c:
    // 0x117e2c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x117e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_117e30:
    // 0x117e30: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x117e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_117e34:
    // 0x117e34: 0x30560007  andi        $s6, $v0, 0x7
    ctx->pc = 0x117e34u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
label_117e38:
    // 0x117e38: 0x2ec20007  sltiu       $v0, $s6, 0x7
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_117e3c:
    // 0x117e3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_117e40:
    if (ctx->pc == 0x117E40u) {
        ctx->pc = 0x117E40u;
            // 0x117e40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x117E44u;
        goto label_117e44;
    }
    ctx->pc = 0x117E3Cu;
    {
        const bool branch_taken_0x117e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E3Cu;
            // 0x117e40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e3c) {
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E44u;
label_117e44:
    // 0x117e44: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_117e48:
    // 0x117e48: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_117e4c:
    // 0x117e4c: 0x2442e670  addiu       $v0, $v0, -0x1990
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960752));
label_117e50:
    // 0x117e50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117e54:
    // 0x117e54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117e58:
    // 0x117e58: 0x800008  jr          $a0
label_117e5c:
    if (ctx->pc == 0x117E5Cu) {
        ctx->pc = 0x117E60u;
        goto label_117e60;
    }
    ctx->pc = 0x117E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117E60u: goto label_117e60;
            case 0x117E68u: goto label_117e68;
            case 0x117E88u: goto label_117e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117E60u;
label_117e60:
    // 0x117e60: 0x1000000a  b           . + 4 + (0xA << 2)
label_117e64:
    if (ctx->pc == 0x117E64u) {
        ctx->pc = 0x117E64u;
            // 0x117e64: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x117E68u;
        goto label_117e68;
    }
    ctx->pc = 0x117E60u;
    {
        const bool branch_taken_0x117e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E60u;
            // 0x117e64: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e60) {
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E68u;
label_117e68:
    // 0x117e68: 0x10000008  b           . + 4 + (0x8 << 2)
label_117e6c:
    if (ctx->pc == 0x117E6Cu) {
        ctx->pc = 0x117E6Cu;
            // 0x117e6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x117E70u;
        goto label_117e70;
    }
    ctx->pc = 0x117E68u;
    {
        const bool branch_taken_0x117e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E68u;
            // 0x117e6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e68) {
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0xc045de8  jal         func_1177A0
label_117e74:
    if (ctx->pc == 0x117E74u) {
        ctx->pc = 0x117E74u;
            // 0x117e74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x117E78u;
        goto label_117e78;
    }
    ctx->pc = 0x117E70u;
    SET_GPR_U32(ctx, 31, 0x117E78u);
    ctx->pc = 0x117E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117E70u;
            // 0x117e74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E78u; }
        if (ctx->pc != 0x117E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E78u; }
        if (ctx->pc != 0x117E78u) { return; }
    }
    ctx->pc = 0x117E78u;
label_117e78:
    // 0x117e78: 0x1000007e  b           . + 4 + (0x7E << 2)
label_117e7c:
    if (ctx->pc == 0x117E7Cu) {
        ctx->pc = 0x117E7Cu;
            // 0x117e7c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x117E80u;
        goto label_117e80;
    }
    ctx->pc = 0x117E78u;
    {
        const bool branch_taken_0x117e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E78u;
            // 0x117e7c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e78) {
            ctx->pc = 0x118074u;
            goto label_118074;
        }
    }
    ctx->pc = 0x117E80u;
label_117e80:
    // 0x117e80: 0x1000007b  b           . + 4 + (0x7B << 2)
label_117e84:
    if (ctx->pc == 0x117E84u) {
        ctx->pc = 0x117E84u;
            // 0x117e84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117E88u;
        goto label_117e88;
    }
    ctx->pc = 0x117E80u;
    {
        const bool branch_taken_0x117e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E80u;
            // 0x117e84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e80) {
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x117E88u;
label_117e88:
    // 0x117e88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x117e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117e8c:
    // 0x117e8c: 0x8ef3000c  lw          $s3, 0xC($s7)
    ctx->pc = 0x117e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_117e90:
    // 0x117e90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x117e90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_117e94:
    // 0x117e94: 0x12600075  beqz        $s3, . + 4 + (0x75 << 2)
label_117e98:
    if (ctx->pc == 0x117E98u) {
        ctx->pc = 0x117E98u;
            // 0x117e98: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117E9Cu;
        goto label_117e9c;
    }
    ctx->pc = 0x117E94u;
    {
        const bool branch_taken_0x117e94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E94u;
            // 0x117e98: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e94) {
            ctx->pc = 0x11806Cu;
            goto label_11806c;
        }
    }
    ctx->pc = 0x117E9Cu;
label_117e9c:
    // 0x117e9c: 0x0  nop
    ctx->pc = 0x117e9cu;
    // NOP
label_117ea0:
    // 0x117ea0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x117ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_117ea4:
    // 0x117ea4: 0x16c20015  bne         $s6, $v0, . + 4 + (0x15 << 2)
label_117ea8:
    if (ctx->pc == 0x117EA8u) {
        ctx->pc = 0x117EA8u;
            // 0x117ea8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x117EACu;
        goto label_117eac;
    }
    ctx->pc = 0x117EA4u;
    {
        const bool branch_taken_0x117ea4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x117EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117EA4u;
            // 0x117ea8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ea4) {
            ctx->pc = 0x117EFCu;
            goto label_117efc;
        }
    }
    ctx->pc = 0x117EACu;
label_117eac:
    // 0x117eac: 0x13c00013  beqz        $fp, . + 4 + (0x13 << 2)
label_117eb0:
    if (ctx->pc == 0x117EB0u) {
        ctx->pc = 0x117EB0u;
            // 0x117eb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x117EB4u;
        goto label_117eb4;
    }
    ctx->pc = 0x117EACu;
    {
        const bool branch_taken_0x117eac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117EACu;
            // 0x117eb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117eac) {
            ctx->pc = 0x117EFCu;
            goto label_117efc;
        }
    }
    ctx->pc = 0x117EB4u;
label_117eb4:
    // 0x117eb4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x117eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_117eb8:
    // 0x117eb8: 0xc045e1a  jal         func_117868
label_117ebc:
    if (ctx->pc == 0x117EBCu) {
        ctx->pc = 0x117EBCu;
            // 0x117ebc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x117EC0u;
        goto label_117ec0;
    }
    ctx->pc = 0x117EB8u;
    SET_GPR_U32(ctx, 31, 0x117EC0u);
    ctx->pc = 0x117EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117EB8u;
            // 0x117ebc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117868u;
    if (runtime->hasFunction(0x117868u)) {
        auto targetFn = runtime->lookupFunction(0x117868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EC0u; }
        if (ctx->pc != 0x117EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1Rest_0x117868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EC0u; }
        if (ctx->pc != 0x117EC0u) { return; }
    }
    ctx->pc = 0x117EC0u;
label_117ec0:
    // 0x117ec0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117ec4:
    // 0x117ec4: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x117ec4u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_117ec8:
    // 0x117ec8: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x117ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_117ecc:
    // 0x117ecc: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_117ed0:
    if (ctx->pc == 0x117ED0u) {
        ctx->pc = 0x117ED0u;
            // 0x117ed0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x117ED4u;
        goto label_117ed4;
    }
    ctx->pc = 0x117ECCu;
    {
        const bool branch_taken_0x117ecc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ecc) {
            ctx->pc = 0x117ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117ECCu;
            // 0x117ed0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x117ED4u;
            goto label_117ed4;
        }
    }
    ctx->pc = 0x117ED4u;
label_117ed4:
    // 0x117ed4: 0x2010  mfhi        $a0
    ctx->pc = 0x117ed4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_117ed8:
    // 0x117ed8: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x117ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_117edc:
    // 0x117edc: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x117edcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_117ee0:
    // 0x117ee0: 0xa3300a  movz        $a2, $a1, $v1
    ctx->pc = 0x117ee0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_117ee4:
    // 0x117ee4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x117ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_117ee8:
    // 0x117ee8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x117ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_117eec:
    // 0x117eec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_117ef0:
    if (ctx->pc == 0x117EF0u) {
        ctx->pc = 0x117EF0u;
            // 0x117ef0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x117EF4u;
        goto label_117ef4;
    }
    ctx->pc = 0x117EECu;
    {
        const bool branch_taken_0x117eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117eec) {
            ctx->pc = 0x117EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117EECu;
            // 0x117ef0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117EF4u;
            goto label_117ef4;
        }
    }
    ctx->pc = 0x117EF4u;
label_117ef4:
    // 0x117ef4: 0x10000012  b           . + 4 + (0x12 << 2)
label_117ef8:
    if (ctx->pc == 0x117EF8u) {
        ctx->pc = 0x117EF8u;
            // 0x117ef8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117EFCu;
        goto label_117efc;
    }
    ctx->pc = 0x117EF4u;
    {
        const bool branch_taken_0x117ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117EF4u;
            // 0x117ef8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ef4) {
            ctx->pc = 0x117F40u;
            goto label_117f40;
        }
    }
    ctx->pc = 0x117EFCu;
label_117efc:
    // 0x117efc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x117efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_117f00:
    // 0x117f00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x117f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_117f04:
    // 0x117f04: 0xc045e1a  jal         func_117868
label_117f08:
    if (ctx->pc == 0x117F08u) {
        ctx->pc = 0x117F08u;
            // 0x117f08: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x117F0Cu;
        goto label_117f0c;
    }
    ctx->pc = 0x117F04u;
    SET_GPR_U32(ctx, 31, 0x117F0Cu);
    ctx->pc = 0x117F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F04u;
            // 0x117f08: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117868u;
    if (runtime->hasFunction(0x117868u)) {
        auto targetFn = runtime->lookupFunction(0x117868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F0Cu; }
        if (ctx->pc != 0x117F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1Rest_0x117868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F0Cu; }
        if (ctx->pc != 0x117F0Cu) { return; }
    }
    ctx->pc = 0x117F0Cu;
label_117f0c:
    // 0x117f0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x117f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117f10:
    // 0x117f10: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x117f10u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_117f14:
    // 0x117f14: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_117f18:
    if (ctx->pc == 0x117F18u) {
        ctx->pc = 0x117F18u;
            // 0x117f18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x117F1Cu;
        goto label_117f1c;
    }
    ctx->pc = 0x117F14u;
    {
        const bool branch_taken_0x117f14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f14) {
            ctx->pc = 0x117F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F14u;
            // 0x117f18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F1Cu;
            goto label_117f1c;
        }
    }
    ctx->pc = 0x117F1Cu;
label_117f1c:
    // 0x117f1c: 0x1810  mfhi        $v1
    ctx->pc = 0x117f1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_117f20:
    // 0x117f20: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x117f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_117f24:
    // 0x117f24: 0xb3202b  sltu        $a0, $a1, $s3
    ctx->pc = 0x117f24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_117f28:
    // 0x117f28: 0x264280a  movz        $a1, $s3, $a0
    ctx->pc = 0x117f28u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_117f2c:
    // 0x117f2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_117f30:
    // 0x117f30: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x117f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_117f34:
    // 0x117f34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_117f38:
    if (ctx->pc == 0x117F38u) {
        ctx->pc = 0x117F38u;
            // 0x117f38: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x117F3Cu;
        goto label_117f3c;
    }
    ctx->pc = 0x117F34u;
    {
        const bool branch_taken_0x117f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117f34) {
            ctx->pc = 0x117F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F34u;
            // 0x117f38: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F3Cu;
            goto label_117f3c;
        }
    }
    ctx->pc = 0x117F3Cu;
label_117f3c:
    // 0x117f3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x117f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_117f40:
    // 0x117f40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_117f44:
    // 0x117f44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_117f48:
    if (ctx->pc == 0x117F48u) {
        ctx->pc = 0x117F48u;
            // 0x117f48: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x117F4Cu;
        goto label_117f4c;
    }
    ctx->pc = 0x117F44u;
    {
        const bool branch_taken_0x117f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117f44) {
            ctx->pc = 0x117F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F44u;
            // 0x117f48: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F4Cu;
            goto label_117f4c;
        }
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0xc043bc0  jal         func_10EF00
label_117f50:
    if (ctx->pc == 0x117F50u) {
        ctx->pc = 0x117F54u;
        goto label_117f54;
    }
    ctx->pc = 0x117F4Cu;
    SET_GPR_U32(ctx, 31, 0x117F54u);
    ctx->pc = 0x10EF00u;
    if (runtime->hasFunction(0x10EF00u)) {
        auto targetFn = runtime->lookupFunction(0x10EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F54u; }
        if (ctx->pc != 0x117F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DBufStart_0x10ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F54u; }
        if (ctx->pc != 0x117F54u) { return; }
    }
    ctx->pc = 0x117F54u;
label_117f54:
    // 0x117f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117f58:
    // 0x117f58: 0x1600ffc9  bnez        $s0, . + 4 + (-0x37 << 2)
label_117f5c:
    if (ctx->pc == 0x117F5Cu) {
        ctx->pc = 0x117F5Cu;
            // 0x117f5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F60u;
        goto label_117f60;
    }
    ctx->pc = 0x117F58u;
    {
        const bool branch_taken_0x117f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F58u;
            // 0x117f5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f58) {
            ctx->pc = 0x117E80u;
            goto label_117e80;
        }
    }
    ctx->pc = 0x117F60u;
label_117f60:
    // 0x117f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117f64:
    // 0x117f64: 0xc045f0a  jal         func_117C28
label_117f68:
    if (ctx->pc == 0x117F68u) {
        ctx->pc = 0x117F68u;
            // 0x117f68: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F6Cu;
        goto label_117f6c;
    }
    ctx->pc = 0x117F64u;
    SET_GPR_U32(ctx, 31, 0x117F6Cu);
    ctx->pc = 0x117F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F64u;
            // 0x117f68: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117C28u;
    if (runtime->hasFunction(0x117C28u)) {
        auto targetFn = runtime->lookupFunction(0x117C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F6Cu; }
        if (ctx->pc != 0x117F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeVertexGiftag_0x117c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F6Cu; }
        if (ctx->pc != 0x117F6Cu) { return; }
    }
    ctx->pc = 0x117F6Cu;
label_117f6c:
    // 0x117f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117f70:
    // 0x117f70: 0x1600003f  bnez        $s0, . + 4 + (0x3F << 2)
label_117f74:
    if (ctx->pc == 0x117F74u) {
        ctx->pc = 0x117F74u;
            // 0x117f74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F78u;
        goto label_117f78;
    }
    ctx->pc = 0x117F70u;
    {
        const bool branch_taken_0x117f70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F70u;
            // 0x117f74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f70) {
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x117F78u;
label_117f78:
    // 0x117f78: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x117f78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_117f7c:
    // 0x117f7c: 0xc045e4c  jal         func_117930
label_117f80:
    if (ctx->pc == 0x117F80u) {
        ctx->pc = 0x117F80u;
            // 0x117f80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x117F84u;
        goto label_117f84;
    }
    ctx->pc = 0x117F7Cu;
    SET_GPR_U32(ctx, 31, 0x117F84u);
    ctx->pc = 0x117F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F7Cu;
            // 0x117f80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117930u;
    if (runtime->hasFunction(0x117930u)) {
        auto targetFn = runtime->lookupFunction(0x117930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F84u; }
        if (ctx->pc != 0x117F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetOptr_0x117930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F84u; }
        if (ctx->pc != 0x117F84u) { return; }
    }
    ctx->pc = 0x117F84u;
label_117f84:
    // 0x117f84: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x117f84u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)65535u)));
label_117f88:
    // 0x117f88: 0x1051ffb9  beq         $v0, $s1, . + 4 + (-0x47 << 2)
label_117f8c:
    if (ctx->pc == 0x117F8Cu) {
        ctx->pc = 0x117F8Cu;
            // 0x117f8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x117F90u;
        goto label_117f90;
    }
    ctx->pc = 0x117F88u;
    {
        const bool branch_taken_0x117f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x117F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F88u;
            // 0x117f8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f88) {
            ctx->pc = 0x117E70u;
            goto label_117e70;
        }
    }
    ctx->pc = 0x117F90u;
label_117f90:
    // 0x117f90: 0x16c2000d  bne         $s6, $v0, . + 4 + (0xD << 2)
label_117f94:
    if (ctx->pc == 0x117F94u) {
        ctx->pc = 0x117F94u;
            // 0x117f94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F98u;
        goto label_117f98;
    }
    ctx->pc = 0x117F90u;
    {
        const bool branch_taken_0x117f90 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x117F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F90u;
            // 0x117f94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f90) {
            ctx->pc = 0x117FC8u;
            goto label_117fc8;
        }
    }
    ctx->pc = 0x117F98u;
label_117f98:
    // 0x117f98: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_117f9c:
    if (ctx->pc == 0x117F9Cu) {
        ctx->pc = 0x117F9Cu;
            // 0x117f9c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FA0u;
        goto label_117fa0;
    }
    ctx->pc = 0x117F98u;
    {
        const bool branch_taken_0x117f98 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F98u;
            // 0x117f9c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f98) {
            ctx->pc = 0x117FCCu;
            goto label_117fcc;
        }
    }
    ctx->pc = 0x117FA0u;
label_117fa0:
    // 0x117fa0: 0xc045f34  jal         func_117CD0
label_117fa4:
    if (ctx->pc == 0x117FA4u) {
        ctx->pc = 0x117FA4u;
            // 0x117fa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FA8u;
        goto label_117fa8;
    }
    ctx->pc = 0x117FA0u;
    SET_GPR_U32(ctx, 31, 0x117FA8u);
    ctx->pc = 0x117FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FA0u;
            // 0x117fa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117CD0u;
    if (runtime->hasFunction(0x117CD0u)) {
        auto targetFn = runtime->lookupFunction(0x117CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FA8u; }
        if (ctx->pc != 0x117FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeExceptionTriFan_0x117cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FA8u; }
        if (ctx->pc != 0x117FA8u) { return; }
    }
    ctx->pc = 0x117FA8u;
label_117fa8:
    // 0x117fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117fac:
    // 0x117fac: 0x16000030  bnez        $s0, . + 4 + (0x30 << 2)
label_117fb0:
    if (ctx->pc == 0x117FB0u) {
        ctx->pc = 0x117FB0u;
            // 0x117fb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FB4u;
        goto label_117fb4;
    }
    ctx->pc = 0x117FACu;
    {
        const bool branch_taken_0x117fac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FACu;
            // 0x117fb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fac) {
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x117FB4u;
label_117fb4:
    // 0x117fb4: 0xc045e4c  jal         func_117930
label_117fb8:
    if (ctx->pc == 0x117FB8u) {
        ctx->pc = 0x117FB8u;
            // 0x117fb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x117FBCu;
        goto label_117fbc;
    }
    ctx->pc = 0x117FB4u;
    SET_GPR_U32(ctx, 31, 0x117FBCu);
    ctx->pc = 0x117FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FB4u;
            // 0x117fb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117930u;
    if (runtime->hasFunction(0x117930u)) {
        auto targetFn = runtime->lookupFunction(0x117930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FBCu; }
        if (ctx->pc != 0x117FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetOptr_0x117930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FBCu; }
        if (ctx->pc != 0x117FBCu) { return; }
    }
    ctx->pc = 0x117FBCu;
label_117fbc:
    // 0x117fbc: 0x1051ffac  beq         $v0, $s1, . + 4 + (-0x54 << 2)
label_117fc0:
    if (ctx->pc == 0x117FC0u) {
        ctx->pc = 0x117FC0u;
            // 0x117fc0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x117FC4u;
        goto label_117fc4;
    }
    ctx->pc = 0x117FBCu;
    {
        const bool branch_taken_0x117fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x117FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FBCu;
            // 0x117fc0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fbc) {
            ctx->pc = 0x117E70u;
            goto label_117e70;
        }
    }
    ctx->pc = 0x117FC4u;
label_117fc4:
    // 0x117fc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x117fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_117fc8:
    // 0x117fc8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x117fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_117fcc:
    // 0x117fcc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117fd0:
    // 0x117fd0: 0xc045ea4  jal         func_117A90
label_117fd4:
    if (ctx->pc == 0x117FD4u) {
        ctx->pc = 0x117FD4u;
            // 0x117fd4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FD8u;
        goto label_117fd8;
    }
    ctx->pc = 0x117FD0u;
    SET_GPR_U32(ctx, 31, 0x117FD8u);
    ctx->pc = 0x117FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FD0u;
            // 0x117fd4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117A90u;
    if (runtime->hasFunction(0x117A90u)) {
        auto targetFn = runtime->lookupFunction(0x117A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FD8u; }
        if (ctx->pc != 0x117FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeVertexPacket_0x117a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FD8u; }
        if (ctx->pc != 0x117FD8u) { return; }
    }
    ctx->pc = 0x117FD8u;
label_117fd8:
    // 0x117fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117fdc:
    // 0x117fdc: 0xc045e4c  jal         func_117930
label_117fe0:
    if (ctx->pc == 0x117FE0u) {
        ctx->pc = 0x117FE0u;
            // 0x117fe0: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x117FE4u;
        goto label_117fe4;
    }
    ctx->pc = 0x117FDCu;
    SET_GPR_U32(ctx, 31, 0x117FE4u);
    ctx->pc = 0x117FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FDCu;
            // 0x117fe0: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117930u;
    if (runtime->hasFunction(0x117930u)) {
        auto targetFn = runtime->lookupFunction(0x117930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FE4u; }
        if (ctx->pc != 0x117FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetOptr_0x117930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FE4u; }
        if (ctx->pc != 0x117FE4u) { return; }
    }
    ctx->pc = 0x117FE4u;
label_117fe4:
    // 0x117fe4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_117fe8:
    // 0x117fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x117fe8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
label_117fec:
    // 0x117fec: 0x1043ffa0  beq         $v0, $v1, . + 4 + (-0x60 << 2)
label_117ff0:
    if (ctx->pc == 0x117FF0u) {
        ctx->pc = 0x117FF4u;
        goto label_117ff4;
    }
    ctx->pc = 0x117FECu;
    {
        const bool branch_taken_0x117fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117fec) {
            ctx->pc = 0x117E70u;
            goto label_117e70;
        }
    }
    ctx->pc = 0x117FF4u;
label_117ff4:
    // 0x117ff4: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
label_117ff8:
    if (ctx->pc == 0x117FF8u) {
        ctx->pc = 0x117FF8u;
            // 0x117ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FFCu;
        goto label_117ffc;
    }
    ctx->pc = 0x117FF4u;
    {
        const bool branch_taken_0x117ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FF4u;
            // 0x117ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ff4) {
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x117FFCu;
label_117ffc:
    // 0x117ffc: 0xc043bd2  jal         func_10EF48
label_118000:
    if (ctx->pc == 0x118000u) {
        ctx->pc = 0x118004u;
        goto label_118004;
    }
    ctx->pc = 0x117FFCu;
    SET_GPR_U32(ctx, 31, 0x118004u);
    ctx->pc = 0x10EF48u;
    if (runtime->hasFunction(0x10EF48u)) {
        auto targetFn = runtime->lookupFunction(0x10EF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118004u; }
        if (ctx->pc != 0x118004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DBufEnd_0x10ef48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118004u; }
        if (ctx->pc != 0x118004u) { return; }
    }
    ctx->pc = 0x118004u;
label_118004:
    // 0x118004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118008:
    // 0x118008: 0x56000019  bnel        $s0, $zero, . + 4 + (0x19 << 2)
label_11800c:
    if (ctx->pc == 0x11800Cu) {
        ctx->pc = 0x11800Cu;
            // 0x11800c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118010u;
        goto label_118010;
    }
    ctx->pc = 0x118008u;
    {
        const bool branch_taken_0x118008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118008) {
            ctx->pc = 0x11800Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118008u;
            // 0x11800c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x118010u;
label_118010:
    // 0x118010: 0x12530010  beq         $s2, $s3, . + 4 + (0x10 << 2)
label_118014:
    if (ctx->pc == 0x118014u) {
        ctx->pc = 0x118014u;
            // 0x118014: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x118018u;
        goto label_118018;
    }
    ctx->pc = 0x118010u;
    {
        const bool branch_taken_0x118010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x118014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118010u;
            // 0x118014: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118010) {
            ctx->pc = 0x118054u;
            goto label_118054;
        }
    }
    ctx->pc = 0x118018u;
label_118018:
    // 0x118018: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_11801c:
    if (ctx->pc == 0x11801Cu) {
        ctx->pc = 0x11801Cu;
            // 0x11801c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118020u;
        goto label_118020;
    }
    ctx->pc = 0x118018u;
    {
        const bool branch_taken_0x118018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118018u;
            // 0x11801c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118018) {
            ctx->pc = 0x118050u;
            goto label_118050;
        }
    }
    ctx->pc = 0x118020u;
label_118020:
    // 0x118020: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_118024:
    // 0x118024: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x118024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_118028:
    // 0x118028: 0x2442e690  addiu       $v0, $v0, -0x1970
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
label_11802c:
    // 0x11802c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118030:
    // 0x118030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118034:
    // 0x118034: 0x800008  jr          $a0
label_118038:
    if (ctx->pc == 0x118038u) {
        ctx->pc = 0x11803Cu;
        goto label_11803c;
    }
    ctx->pc = 0x118034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117DF8u: goto label_117df8;
            case 0x117DFCu: goto label_117dfc;
            case 0x117E00u: goto label_117e00;
            case 0x117E04u: goto label_117e04;
            case 0x117E08u: goto label_117e08;
            case 0x117E0Cu: goto label_117e0c;
            case 0x117E10u: goto label_117e10;
            case 0x117E14u: goto label_117e14;
            case 0x117E18u: goto label_117e18;
            case 0x117E1Cu: goto label_117e1c;
            case 0x117E20u: goto label_117e20;
            case 0x117E24u: goto label_117e24;
            case 0x117E28u: goto label_117e28;
            case 0x117E2Cu: goto label_117e2c;
            case 0x117E30u: goto label_117e30;
            case 0x117E34u: goto label_117e34;
            case 0x117E38u: goto label_117e38;
            case 0x117E3Cu: goto label_117e3c;
            case 0x117E40u: goto label_117e40;
            case 0x117E44u: goto label_117e44;
            case 0x117E48u: goto label_117e48;
            case 0x117E4Cu: goto label_117e4c;
            case 0x117E50u: goto label_117e50;
            case 0x117E54u: goto label_117e54;
            case 0x117E58u: goto label_117e58;
            case 0x117E5Cu: goto label_117e5c;
            case 0x117E60u: goto label_117e60;
            case 0x117E64u: goto label_117e64;
            case 0x117E68u: goto label_117e68;
            case 0x117E6Cu: goto label_117e6c;
            case 0x117E70u: goto label_117e70;
            case 0x117E74u: goto label_117e74;
            case 0x117E78u: goto label_117e78;
            case 0x117E7Cu: goto label_117e7c;
            case 0x117E80u: goto label_117e80;
            case 0x117E84u: goto label_117e84;
            case 0x117E88u: goto label_117e88;
            case 0x117E8Cu: goto label_117e8c;
            case 0x117E90u: goto label_117e90;
            case 0x117E94u: goto label_117e94;
            case 0x117E98u: goto label_117e98;
            case 0x117E9Cu: goto label_117e9c;
            case 0x117EA0u: goto label_117ea0;
            case 0x117EA4u: goto label_117ea4;
            case 0x117EA8u: goto label_117ea8;
            case 0x117EACu: goto label_117eac;
            case 0x117EB0u: goto label_117eb0;
            case 0x117EB4u: goto label_117eb4;
            case 0x117EB8u: goto label_117eb8;
            case 0x117EBCu: goto label_117ebc;
            case 0x117EC0u: goto label_117ec0;
            case 0x117EC4u: goto label_117ec4;
            case 0x117EC8u: goto label_117ec8;
            case 0x117ECCu: goto label_117ecc;
            case 0x117ED0u: goto label_117ed0;
            case 0x117ED4u: goto label_117ed4;
            case 0x117ED8u: goto label_117ed8;
            case 0x117EDCu: goto label_117edc;
            case 0x117EE0u: goto label_117ee0;
            case 0x117EE4u: goto label_117ee4;
            case 0x117EE8u: goto label_117ee8;
            case 0x117EECu: goto label_117eec;
            case 0x117EF0u: goto label_117ef0;
            case 0x117EF4u: goto label_117ef4;
            case 0x117EF8u: goto label_117ef8;
            case 0x117EFCu: goto label_117efc;
            case 0x117F00u: goto label_117f00;
            case 0x117F04u: goto label_117f04;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F10u: goto label_117f10;
            case 0x117F14u: goto label_117f14;
            case 0x117F18u: goto label_117f18;
            case 0x117F1Cu: goto label_117f1c;
            case 0x117F20u: goto label_117f20;
            case 0x117F24u: goto label_117f24;
            case 0x117F28u: goto label_117f28;
            case 0x117F2Cu: goto label_117f2c;
            case 0x117F30u: goto label_117f30;
            case 0x117F34u: goto label_117f34;
            case 0x117F38u: goto label_117f38;
            case 0x117F3Cu: goto label_117f3c;
            case 0x117F40u: goto label_117f40;
            case 0x117F44u: goto label_117f44;
            case 0x117F48u: goto label_117f48;
            case 0x117F4Cu: goto label_117f4c;
            case 0x117F50u: goto label_117f50;
            case 0x117F54u: goto label_117f54;
            case 0x117F58u: goto label_117f58;
            case 0x117F5Cu: goto label_117f5c;
            case 0x117F60u: goto label_117f60;
            case 0x117F64u: goto label_117f64;
            case 0x117F68u: goto label_117f68;
            case 0x117F6Cu: goto label_117f6c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F78u: goto label_117f78;
            case 0x117F7Cu: goto label_117f7c;
            case 0x117F80u: goto label_117f80;
            case 0x117F84u: goto label_117f84;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x117F90u: goto label_117f90;
            case 0x117F94u: goto label_117f94;
            case 0x117F98u: goto label_117f98;
            case 0x117F9Cu: goto label_117f9c;
            case 0x117FA0u: goto label_117fa0;
            case 0x117FA4u: goto label_117fa4;
            case 0x117FA8u: goto label_117fa8;
            case 0x117FACu: goto label_117fac;
            case 0x117FB0u: goto label_117fb0;
            case 0x117FB4u: goto label_117fb4;
            case 0x117FB8u: goto label_117fb8;
            case 0x117FBCu: goto label_117fbc;
            case 0x117FC0u: goto label_117fc0;
            case 0x117FC4u: goto label_117fc4;
            case 0x117FC8u: goto label_117fc8;
            case 0x117FCCu: goto label_117fcc;
            case 0x117FD0u: goto label_117fd0;
            case 0x117FD4u: goto label_117fd4;
            case 0x117FD8u: goto label_117fd8;
            case 0x117FDCu: goto label_117fdc;
            case 0x117FE0u: goto label_117fe0;
            case 0x117FE4u: goto label_117fe4;
            case 0x117FE8u: goto label_117fe8;
            case 0x117FECu: goto label_117fec;
            case 0x117FF0u: goto label_117ff0;
            case 0x117FF4u: goto label_117ff4;
            case 0x117FF8u: goto label_117ff8;
            case 0x117FFCu: goto label_117ffc;
            case 0x118000u: goto label_118000;
            case 0x118004u: goto label_118004;
            case 0x118008u: goto label_118008;
            case 0x11800Cu: goto label_11800c;
            case 0x118010u: goto label_118010;
            case 0x118014u: goto label_118014;
            case 0x118018u: goto label_118018;
            case 0x11801Cu: goto label_11801c;
            case 0x118020u: goto label_118020;
            case 0x118024u: goto label_118024;
            case 0x118028u: goto label_118028;
            case 0x11802Cu: goto label_11802c;
            case 0x118030u: goto label_118030;
            case 0x118034u: goto label_118034;
            case 0x118038u: goto label_118038;
            case 0x11803Cu: goto label_11803c;
            case 0x118040u: goto label_118040;
            case 0x118044u: goto label_118044;
            case 0x118048u: goto label_118048;
            case 0x11804Cu: goto label_11804c;
            case 0x118050u: goto label_118050;
            case 0x118054u: goto label_118054;
            case 0x118058u: goto label_118058;
            case 0x11805Cu: goto label_11805c;
            case 0x118060u: goto label_118060;
            case 0x118064u: goto label_118064;
            case 0x118068u: goto label_118068;
            case 0x11806Cu: goto label_11806c;
            case 0x118070u: goto label_118070;
            case 0x118074u: goto label_118074;
            case 0x118078u: goto label_118078;
            case 0x11807Cu: goto label_11807c;
            case 0x118080u: goto label_118080;
            case 0x118084u: goto label_118084;
            case 0x118088u: goto label_118088;
            case 0x11808Cu: goto label_11808c;
            case 0x118090u: goto label_118090;
            case 0x118094u: goto label_118094;
            case 0x118098u: goto label_118098;
            case 0x11809Cu: goto label_11809c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11803Cu;
label_11803c:
    // 0x11803c: 0x10000004  b           . + 4 + (0x4 << 2)
label_118040:
    if (ctx->pc == 0x118040u) {
        ctx->pc = 0x118040u;
            // 0x118040: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x118044u;
        goto label_118044;
    }
    ctx->pc = 0x11803Cu;
    {
        const bool branch_taken_0x11803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11803Cu;
            // 0x118040: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11803c) {
            ctx->pc = 0x118050u;
            goto label_118050;
        }
    }
    ctx->pc = 0x118044u;
label_118044:
    // 0x118044: 0x10000002  b           . + 4 + (0x2 << 2)
label_118048:
    if (ctx->pc == 0x118048u) {
        ctx->pc = 0x118048u;
            // 0x118048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11804Cu;
        goto label_11804c;
    }
    ctx->pc = 0x118044u;
    {
        const bool branch_taken_0x118044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118044u;
            // 0x118048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118044) {
            ctx->pc = 0x118050u;
            goto label_118050;
        }
    }
    ctx->pc = 0x11804Cu;
label_11804c:
    // 0x11804c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11804cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118050:
    // 0x118050: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x118050u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_118054:
    // 0x118054: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_118058:
    if (ctx->pc == 0x118058u) {
        ctx->pc = 0x118058u;
            // 0x118058: 0x2729823  subu        $s3, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x11805Cu;
        goto label_11805c;
    }
    ctx->pc = 0x118054u;
    {
        const bool branch_taken_0x118054 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x118058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118054u;
            // 0x118058: 0x2729823  subu        $s3, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118054) {
            ctx->pc = 0x118064u;
            goto label_118064;
        }
    }
    ctx->pc = 0x11805Cu;
label_11805c:
    // 0x11805c: 0xc045dfe  jal         func_1177F8
label_118060:
    if (ctx->pc == 0x118060u) {
        ctx->pc = 0x118064u;
        goto label_118064;
    }
    ctx->pc = 0x11805Cu;
    SET_GPR_U32(ctx, 31, 0x118064u);
    ctx->pc = 0x1177F8u;
    if (runtime->hasFunction(0x1177F8u)) {
        auto targetFn = runtime->lookupFunction(0x1177F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118064u; }
        if (ctx->pc != 0x118064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1Reset_0x1177f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118064u; }
        if (ctx->pc != 0x118064u) { return; }
    }
    ctx->pc = 0x118064u;
label_118064:
    // 0x118064: 0x1660ff8e  bnez        $s3, . + 4 + (-0x72 << 2)
label_118068:
    if (ctx->pc == 0x118068u) {
        ctx->pc = 0x118068u;
            // 0x118068: 0x3d2f021  addu        $fp, $fp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->pc = 0x11806Cu;
        goto label_11806c;
    }
    ctx->pc = 0x118064u;
    {
        const bool branch_taken_0x118064 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x118068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118064u;
            // 0x118068: 0x3d2f021  addu        $fp, $fp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118064) {
            ctx->pc = 0x117EA0u;
            goto label_117ea0;
        }
    }
    ctx->pc = 0x11806Cu;
label_11806c:
    // 0x11806c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11806cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118070:
    // 0x118070: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x118070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_118074:
    // 0x118074: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x118074u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_118078:
    // 0x118078: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x118078u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11807c:
    // 0x11807c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11807cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_118080:
    // 0x118080: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x118080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_118084:
    // 0x118084: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x118084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_118088:
    // 0x118088: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x118088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11808c:
    // 0x11808c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11808cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_118090:
    // 0x118090: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x118090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118094:
    // 0x118094: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118098:
    // 0x118098: 0x3e00008  jr          $ra
label_11809c:
    if (ctx->pc == 0x11809Cu) {
        ctx->pc = 0x11809Cu;
            // 0x11809c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1180A0u;
        goto label_fallthrough_0x118098;
    }
    ctx->pc = 0x118098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118098u;
            // 0x11809c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117DF8u: goto label_117df8;
            case 0x117DFCu: goto label_117dfc;
            case 0x117E00u: goto label_117e00;
            case 0x117E04u: goto label_117e04;
            case 0x117E08u: goto label_117e08;
            case 0x117E0Cu: goto label_117e0c;
            case 0x117E10u: goto label_117e10;
            case 0x117E14u: goto label_117e14;
            case 0x117E18u: goto label_117e18;
            case 0x117E1Cu: goto label_117e1c;
            case 0x117E20u: goto label_117e20;
            case 0x117E24u: goto label_117e24;
            case 0x117E28u: goto label_117e28;
            case 0x117E2Cu: goto label_117e2c;
            case 0x117E30u: goto label_117e30;
            case 0x117E34u: goto label_117e34;
            case 0x117E38u: goto label_117e38;
            case 0x117E3Cu: goto label_117e3c;
            case 0x117E40u: goto label_117e40;
            case 0x117E44u: goto label_117e44;
            case 0x117E48u: goto label_117e48;
            case 0x117E4Cu: goto label_117e4c;
            case 0x117E50u: goto label_117e50;
            case 0x117E54u: goto label_117e54;
            case 0x117E58u: goto label_117e58;
            case 0x117E5Cu: goto label_117e5c;
            case 0x117E60u: goto label_117e60;
            case 0x117E64u: goto label_117e64;
            case 0x117E68u: goto label_117e68;
            case 0x117E6Cu: goto label_117e6c;
            case 0x117E70u: goto label_117e70;
            case 0x117E74u: goto label_117e74;
            case 0x117E78u: goto label_117e78;
            case 0x117E7Cu: goto label_117e7c;
            case 0x117E80u: goto label_117e80;
            case 0x117E84u: goto label_117e84;
            case 0x117E88u: goto label_117e88;
            case 0x117E8Cu: goto label_117e8c;
            case 0x117E90u: goto label_117e90;
            case 0x117E94u: goto label_117e94;
            case 0x117E98u: goto label_117e98;
            case 0x117E9Cu: goto label_117e9c;
            case 0x117EA0u: goto label_117ea0;
            case 0x117EA4u: goto label_117ea4;
            case 0x117EA8u: goto label_117ea8;
            case 0x117EACu: goto label_117eac;
            case 0x117EB0u: goto label_117eb0;
            case 0x117EB4u: goto label_117eb4;
            case 0x117EB8u: goto label_117eb8;
            case 0x117EBCu: goto label_117ebc;
            case 0x117EC0u: goto label_117ec0;
            case 0x117EC4u: goto label_117ec4;
            case 0x117EC8u: goto label_117ec8;
            case 0x117ECCu: goto label_117ecc;
            case 0x117ED0u: goto label_117ed0;
            case 0x117ED4u: goto label_117ed4;
            case 0x117ED8u: goto label_117ed8;
            case 0x117EDCu: goto label_117edc;
            case 0x117EE0u: goto label_117ee0;
            case 0x117EE4u: goto label_117ee4;
            case 0x117EE8u: goto label_117ee8;
            case 0x117EECu: goto label_117eec;
            case 0x117EF0u: goto label_117ef0;
            case 0x117EF4u: goto label_117ef4;
            case 0x117EF8u: goto label_117ef8;
            case 0x117EFCu: goto label_117efc;
            case 0x117F00u: goto label_117f00;
            case 0x117F04u: goto label_117f04;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F10u: goto label_117f10;
            case 0x117F14u: goto label_117f14;
            case 0x117F18u: goto label_117f18;
            case 0x117F1Cu: goto label_117f1c;
            case 0x117F20u: goto label_117f20;
            case 0x117F24u: goto label_117f24;
            case 0x117F28u: goto label_117f28;
            case 0x117F2Cu: goto label_117f2c;
            case 0x117F30u: goto label_117f30;
            case 0x117F34u: goto label_117f34;
            case 0x117F38u: goto label_117f38;
            case 0x117F3Cu: goto label_117f3c;
            case 0x117F40u: goto label_117f40;
            case 0x117F44u: goto label_117f44;
            case 0x117F48u: goto label_117f48;
            case 0x117F4Cu: goto label_117f4c;
            case 0x117F50u: goto label_117f50;
            case 0x117F54u: goto label_117f54;
            case 0x117F58u: goto label_117f58;
            case 0x117F5Cu: goto label_117f5c;
            case 0x117F60u: goto label_117f60;
            case 0x117F64u: goto label_117f64;
            case 0x117F68u: goto label_117f68;
            case 0x117F6Cu: goto label_117f6c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F78u: goto label_117f78;
            case 0x117F7Cu: goto label_117f7c;
            case 0x117F80u: goto label_117f80;
            case 0x117F84u: goto label_117f84;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x117F90u: goto label_117f90;
            case 0x117F94u: goto label_117f94;
            case 0x117F98u: goto label_117f98;
            case 0x117F9Cu: goto label_117f9c;
            case 0x117FA0u: goto label_117fa0;
            case 0x117FA4u: goto label_117fa4;
            case 0x117FA8u: goto label_117fa8;
            case 0x117FACu: goto label_117fac;
            case 0x117FB0u: goto label_117fb0;
            case 0x117FB4u: goto label_117fb4;
            case 0x117FB8u: goto label_117fb8;
            case 0x117FBCu: goto label_117fbc;
            case 0x117FC0u: goto label_117fc0;
            case 0x117FC4u: goto label_117fc4;
            case 0x117FC8u: goto label_117fc8;
            case 0x117FCCu: goto label_117fcc;
            case 0x117FD0u: goto label_117fd0;
            case 0x117FD4u: goto label_117fd4;
            case 0x117FD8u: goto label_117fd8;
            case 0x117FDCu: goto label_117fdc;
            case 0x117FE0u: goto label_117fe0;
            case 0x117FE4u: goto label_117fe4;
            case 0x117FE8u: goto label_117fe8;
            case 0x117FECu: goto label_117fec;
            case 0x117FF0u: goto label_117ff0;
            case 0x117FF4u: goto label_117ff4;
            case 0x117FF8u: goto label_117ff8;
            case 0x117FFCu: goto label_117ffc;
            case 0x118000u: goto label_118000;
            case 0x118004u: goto label_118004;
            case 0x118008u: goto label_118008;
            case 0x11800Cu: goto label_11800c;
            case 0x118010u: goto label_118010;
            case 0x118014u: goto label_118014;
            case 0x118018u: goto label_118018;
            case 0x11801Cu: goto label_11801c;
            case 0x118020u: goto label_118020;
            case 0x118024u: goto label_118024;
            case 0x118028u: goto label_118028;
            case 0x11802Cu: goto label_11802c;
            case 0x118030u: goto label_118030;
            case 0x118034u: goto label_118034;
            case 0x118038u: goto label_118038;
            case 0x11803Cu: goto label_11803c;
            case 0x118040u: goto label_118040;
            case 0x118044u: goto label_118044;
            case 0x118048u: goto label_118048;
            case 0x11804Cu: goto label_11804c;
            case 0x118050u: goto label_118050;
            case 0x118054u: goto label_118054;
            case 0x118058u: goto label_118058;
            case 0x11805Cu: goto label_11805c;
            case 0x118060u: goto label_118060;
            case 0x118064u: goto label_118064;
            case 0x118068u: goto label_118068;
            case 0x11806Cu: goto label_11806c;
            case 0x118070u: goto label_118070;
            case 0x118074u: goto label_118074;
            case 0x118078u: goto label_118078;
            case 0x11807Cu: goto label_11807c;
            case 0x118080u: goto label_118080;
            case 0x118084u: goto label_118084;
            case 0x118088u: goto label_118088;
            case 0x11808Cu: goto label_11808c;
            case 0x118090u: goto label_118090;
            case 0x118094u: goto label_118094;
            case 0x118098u: goto label_118098;
            case 0x11809Cu: goto label_11809c;
            default: break;
        }
        return;
    }
label_fallthrough_0x118098:
    ctx->pc = 0x1180A0u;
}
