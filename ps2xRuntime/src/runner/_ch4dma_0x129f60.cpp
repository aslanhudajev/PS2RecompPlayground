#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ch4dma
// Address: 0x129f60 - 0x12a034
void _ch4dma_0x129f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ch4dma_0x129f60");
#endif

    ctx->pc = 0x129f60u;

    // 0x129f60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129f64: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129f68: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x129f68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x129f6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x129f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x129f70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129f74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x129f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x129f78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129F78u;
    {
        const bool branch_taken_0x129f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F78u;
            // 0x129f7c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f78) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129F80u;
    // 0x129f80: 0xf  sync
    ctx->pc = 0x129f80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x129f84: 0x42000038  ei
    ctx->pc = 0x129f84u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x129f88: 0x3e00008  jr          $ra
    ctx->pc = 0x129F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F88u;
            // 0x129f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129F90u: goto label_129f90;
            case 0x129FF4u: goto label_129ff4;
            case 0x12A024u: goto label_12a024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129F90u;
label_129f90:
    // 0x129f90: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x129f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129f94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x129F94u;
    {
        const bool branch_taken_0x129f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F94u;
            // 0x129f98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f94) {
            ctx->pc = 0x129FF4u;
            goto label_129ff4;
        }
    }
    ctx->pc = 0x129F9Cu;
    // 0x129f9c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x129f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x129fa0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129fa4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x129fa4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x129fa8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x129fa8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x129fac: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x129facu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46112u)));
    // 0x129fb0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x129fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x129fb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129fb8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x129fb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46080u)));
    // 0x129fbc: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x129fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x129fc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x129fc0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129fc4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x129fc8: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x129fc8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65520u)));
    // 0x129fcc: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x129fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x129fd0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x129fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x129fd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x129fd4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x129fd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x129fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x129fdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x129fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x129fe0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x129fe0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x129fe4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x129fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x129fe8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x129fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x129fec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x129FECu;
    {
        const bool branch_taken_0x129fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FECu;
            // 0x129ff0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fec) {
            ctx->pc = 0x12A024u;
            goto label_12a024;
        }
    }
    ctx->pc = 0x129FF4u;
label_129ff4:
    // 0x129ff4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x129ff8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129ffc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x129ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x12a000: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12a000u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12a004: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x12a004u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46112u)));
    // 0x12a008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12a00c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x12a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x12a010: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x12a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12a014: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x12a014u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46080u)));
    // 0x12a018: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12a018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x12a01c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x12a01cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x12a020: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x12a020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_12a024:
    // 0x12a024: 0xf  sync
    ctx->pc = 0x12a024u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12a028: 0x42000038  ei
    ctx->pc = 0x12a028u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x12a02c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A02Cu;
            // 0x12a030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129F90u: goto label_129f90;
            case 0x129FF4u: goto label_129ff4;
            case 0x12A024u: goto label_12a024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A034u;
}
