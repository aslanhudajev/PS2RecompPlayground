#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _outputFrame
// Address: 0x128e40 - 0x128ed0
void _outputFrame_0x128e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_outputFrame_0x128e40");
#endif

    ctx->pc = 0x128e40u;

    // 0x128e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128e44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x128e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128e50: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x128E50u;
    {
        const bool branch_taken_0x128e50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E50u;
            // 0x128e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e50) {
            ctx->pc = 0x128EACu;
            goto label_128eac;
        }
    }
    ctx->pc = 0x128E58u;
    // 0x128e58: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x128e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x128e5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128e60: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x128E60u;
    {
        const bool branch_taken_0x128e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x128E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E60u;
            // 0x128e64: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e60) {
            ctx->pc = 0x128E88u;
            goto label_128e88;
        }
    }
    ctx->pc = 0x128E68u;
    // 0x128e68: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128E68u;
    {
        const bool branch_taken_0x128e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x128e68) {
            ctx->pc = 0x128E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128E68u;
            // 0x128e6c: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128E74u;
            goto label_128e74;
        }
    }
    ctx->pc = 0x128E70u;
    // 0x128e70: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x128e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_128e74:
    // 0x128e74: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x128e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x128e78: 0xc04a59c  jal         func_129670
    ctx->pc = 0x128E78u;
    SET_GPR_U32(ctx, 31, 0x128E80u);
    ctx->pc = 0x128E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128E78u;
            // 0x128e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129670u;
    if (runtime->hasFunction(0x129670u)) {
        auto targetFn = runtime->lookupFunction(0x129670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E80u; }
        if (ctx->pc != 0x128E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x129670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E80u; }
        if (ctx->pc != 0x128E80u) { return; }
    }
    ctx->pc = 0x128E80u;
    // 0x128e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x128E80u;
    {
        const bool branch_taken_0x128e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E80u;
            // 0x128e84: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e80) {
            ctx->pc = 0x128EB0u;
            goto label_128eb0;
        }
    }
    ctx->pc = 0x128E88u;
label_128e88:
    // 0x128e88: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128E88u;
    {
        const bool branch_taken_0x128e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x128e88) {
            ctx->pc = 0x128E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128E88u;
            // 0x128e8c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128E9Cu;
            goto label_128e9c;
        }
    }
    ctx->pc = 0x128E90u;
    // 0x128e90: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x128e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x128e94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128E94u;
    {
        const bool branch_taken_0x128e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E94u;
            // 0x128e98: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e94) {
            ctx->pc = 0x128EA0u;
            goto label_128ea0;
        }
    }
    ctx->pc = 0x128E9Cu;
label_128e9c:
    // 0x128e9c: 0x8e0601d8  lw          $a2, 0x1D8($s0)
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_128ea0:
    // 0x128ea0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x128ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x128ea4: 0xc04a5e0  jal         func_129780
    ctx->pc = 0x128EA4u;
    SET_GPR_U32(ctx, 31, 0x128EACu);
    ctx->pc = 0x128EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128EA4u;
            // 0x128ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129780u;
    if (runtime->hasFunction(0x129780u)) {
        auto targetFn = runtime->lookupFunction(0x129780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EACu; }
        if (ctx->pc != 0x128EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x129780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EACu; }
        if (ctx->pc != 0x128EACu) { return; }
    }
    ctx->pc = 0x128EACu;
label_128eac:
    // 0x128eac: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x128eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_128eb0:
    // 0x128eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128eb4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128EB4u;
    {
        const bool branch_taken_0x128eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EB4u;
            // 0x128eb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128eb4) {
            ctx->pc = 0x128EC4u;
            goto label_128ec4;
        }
    }
    ctx->pc = 0x128EBCu;
    // 0x128ebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128ec0: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x128ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_128ec4:
    // 0x128ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x128EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EC8u;
            // 0x128ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128E74u: goto label_128e74;
            case 0x128E88u: goto label_128e88;
            case 0x128E9Cu: goto label_128e9c;
            case 0x128EA0u: goto label_128ea0;
            case 0x128EACu: goto label_128eac;
            case 0x128EB0u: goto label_128eb0;
            case 0x128EC4u: goto label_128ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128ED0u;
}
