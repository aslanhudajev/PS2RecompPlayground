#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _updateRefImage
// Address: 0x128ed0 - 0x129184
void _updateRefImage_0x128ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_updateRefImage_0x128ed0");
#endif

    ctx->pc = 0x128ed0u;

    // 0x128ed0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x128ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ed4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x128ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128ed8: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x128ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x128edc: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x128edcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128ee0: 0x8cea0150  lw          $t2, 0x150($a3)
    ctx->pc = 0x128ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x128ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee8: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x128ee8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)3u)));
    // 0x128eec: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x128eecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ef0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x128ef0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ef4: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x128EF4u;
    {
        const bool branch_taken_0x128ef4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x128EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EF4u;
            // 0x128ef8: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef4) {
            ctx->pc = 0x129008u;
            goto label_129008;
        }
    }
    ctx->pc = 0x128EFCu;
    // 0x128efc: 0x8ce200a0  lw          $v0, 0xA0($a3)
    ctx->pc = 0x128efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x128f00: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x128f04: 0x8ce501c4  lw          $a1, 0x1C4($a3)
    ctx->pc = 0x128f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
    // 0x128f08: 0x8ce601d4  lw          $a2, 0x1D4($a3)
    ctx->pc = 0x128f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x128f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128f10: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x128f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x128f14: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x128f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x128f18: 0xace501c0  sw          $a1, 0x1C0($a3)
    ctx->pc = 0x128f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 5));
    // 0x128f1c: 0xace601d0  sw          $a2, 0x1D0($a3)
    ctx->pc = 0x128f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 6));
    // 0x128f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128F20u;
    {
        const bool branch_taken_0x128f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128F20u;
            // 0x128f24: 0xace401e0  sw          $a0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f20) {
            ctx->pc = 0x128F34u;
            goto label_128f34;
        }
    }
    ctx->pc = 0x128F28u;
    // 0x128f28: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x128f28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
    // 0x128f2c: 0xace001a8  sw          $zero, 0x1A8($a3)
    ctx->pc = 0x128f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
    // 0x128f30: 0xace001a4  sw          $zero, 0x1A4($a3)
    ctx->pc = 0x128f30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 420), GPR_U32(ctx, 0));
label_128f34:
    // 0x128f34: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x128f38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x128F38u;
    {
        const bool branch_taken_0x128f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f38) {
            ctx->pc = 0x128F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F38u;
            // 0x128f3c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128F50u;
            goto label_128f50;
        }
    }
    ctx->pc = 0x128F40u;
    // 0x128f40: 0x8ce201a8  lw          $v0, 0x1A8($a3)
    ctx->pc = 0x128f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x128f44: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x128F44u;
    {
        const bool branch_taken_0x128f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f44) {
            ctx->pc = 0x128F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F44u;
            // 0x128f48: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F4Cu;
    // 0x128f4c: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_128f50:
    // 0x128f50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x128F50u;
    {
        const bool branch_taken_0x128f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f50) {
            ctx->pc = 0x128F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F50u;
            // 0x128f54: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F58u;
    // 0x128f58: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x128f5c: 0x8ce401c8  lw          $a0, 0x1C8($a3)
    ctx->pc = 0x128f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x128f60: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x128f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x128f64: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x128f68: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x128f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x128f6c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x128f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x128f70: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x128f74: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x128f74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
label_128f78:
    // 0x128f78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128f7c: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128F7Cu;
    {
        const bool branch_taken_0x128f7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x128F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128F7Cu;
            // 0x128f80: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f7c) {
            ctx->pc = 0x128FACu;
            goto label_128fac;
        }
    }
    ctx->pc = 0x128F84u;
    // 0x128f84: 0x8ce301b8  lw          $v1, 0x1B8($a3)
    ctx->pc = 0x128f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x128f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f8c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x128f90: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x128F90u;
    {
        const bool branch_taken_0x128f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x128f90) {
            ctx->pc = 0x128F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F90u;
            // 0x128f94: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128FF4u;
            goto label_128ff4;
        }
    }
    ctx->pc = 0x128F98u;
    // 0x128f98: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x128f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x128f9c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x128F9Cu;
    {
        const bool branch_taken_0x128f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128F9Cu;
            // 0x128fa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f9c) {
            ctx->pc = 0x1290C0u;
            goto label_1290c0;
        }
    }
    ctx->pc = 0x128FA4u;
    // 0x128fa4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x128FA4u;
    {
        const bool branch_taken_0x128fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FA4u;
            // 0x128fa8: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fa4) {
            ctx->pc = 0x128FF4u;
            goto label_128ff4;
        }
    }
    ctx->pc = 0x128FACu;
label_128fac:
    // 0x128fac: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x128facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x128fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128fb4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x128fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x128fb8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x128FB8u;
    {
        const bool branch_taken_0x128fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128fb8) {
            ctx->pc = 0x128FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128FB8u;
            // 0x128fbc: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128FD4u;
            goto label_128fd4;
        }
    }
    ctx->pc = 0x128FC0u;
    // 0x128fc0: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x128fc4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x128fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x128fc8: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128FC8u;
    {
        const bool branch_taken_0x128fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x128fc8) {
            ctx->pc = 0x128FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128FC8u;
            // 0x128fcc: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128FE0u;
            goto label_128fe0;
        }
    }
    ctx->pc = 0x128FD0u;
    // 0x128fd0: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x128fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_128fd4:
    // 0x128fd4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x128FD4u;
    {
        const bool branch_taken_0x128fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FD4u;
            // 0x128fd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd4) {
            ctx->pc = 0x1290C0u;
            goto label_1290c0;
        }
    }
    ctx->pc = 0x128FDCu;
    // 0x128fdc: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x128fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_128fe0:
    // 0x128fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128fe4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x128fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x128fe8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x128FE8u;
    {
        const bool branch_taken_0x128fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x128FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FE8u;
            // 0x128fec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fe8) {
            ctx->pc = 0x1290C0u;
            goto label_1290c0;
        }
    }
    ctx->pc = 0x128FF0u;
    // 0x128ff0: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x128ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_128ff4:
    // 0x128ff4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x128ff4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ff8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x128ffc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x128ffcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x129000: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x129000u;
    {
        const bool branch_taken_0x129000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129000u;
            // 0x129004: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129000) {
            ctx->pc = 0x1290BCu;
            goto label_1290bc;
        }
    }
    ctx->pc = 0x129008u;
label_129008:
    // 0x129008: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x129008u;
    {
        const bool branch_taken_0x129008 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x129008) {
            ctx->pc = 0x12900Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129008u;
            // 0x12900c: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129044u;
            goto label_129044;
        }
    }
    ctx->pc = 0x129010u;
    // 0x129010: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x129014: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x129014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x129018: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x129018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
    // 0x12901c: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x12901cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x129020: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x129020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x129024: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x129024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x129028: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x129028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x12902c: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x12902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x129030: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x129030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
    // 0x129034: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x129034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
    // 0x129038: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x129038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
    // 0x12903c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x12903cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x129040: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x129040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_129044:
    // 0x129044: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x129044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x129048: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x12904c: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x12904cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
    // 0x129050: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x129050u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
    // 0x129054: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x129054u;
    {
        const bool branch_taken_0x129054 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x129058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129054u;
            // 0x129058: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129054) {
            ctx->pc = 0x129070u;
            goto label_129070;
        }
    }
    ctx->pc = 0x12905Cu;
    // 0x12905c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12905Cu;
            // 0x129060: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290BCu;
            goto label_1290bc;
        }
    }
    ctx->pc = 0x129064u;
    // 0x129064: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x129068: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x129068u;
    {
        const bool branch_taken_0x129068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12906Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129068u;
            // 0x12906c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129068) {
            ctx->pc = 0x1290ACu;
            goto label_1290ac;
        }
    }
    ctx->pc = 0x129070u;
label_129070:
    // 0x129070: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x129070u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x129074: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x129074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129078: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x129078u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x12907c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x12907Cu;
    {
        const bool branch_taken_0x12907c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x129080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12907Cu;
            // 0x129080: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12907c) {
            ctx->pc = 0x1290B8u;
            goto label_1290b8;
        }
    }
    ctx->pc = 0x129084u;
    // 0x129084: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x129084u;
    {
        const bool branch_taken_0x129084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x129084) {
            ctx->pc = 0x129088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129084u;
            // 0x129088: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12909Cu;
            goto label_12909c;
        }
    }
    ctx->pc = 0x12908Cu;
    // 0x12908c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x129090: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x129090u;
    {
        const bool branch_taken_0x129090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x129090) {
            ctx->pc = 0x129094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129090u;
            // 0x129094: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290BCu;
            goto label_1290bc;
        }
    }
    ctx->pc = 0x129098u;
    // 0x129098: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x129098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_12909c:
    // 0x12909c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x12909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1290a0: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1290A0u;
    {
        const bool branch_taken_0x1290a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1290A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290A0u;
            // 0x1290a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290a0) {
            ctx->pc = 0x1290C0u;
            goto label_1290c0;
        }
    }
    ctx->pc = 0x1290A8u;
    // 0x1290a8: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1290ac:
    // 0x1290ac: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1290b0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1290B0u;
    {
        const bool branch_taken_0x1290b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1290B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290B0u;
            // 0x1290b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290b0) {
            ctx->pc = 0x1290C0u;
            goto label_1290c0;
        }
    }
    ctx->pc = 0x1290B8u;
label_1290b8:
    // 0x1290b8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1290bc:
    // 0x1290bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1290bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1290c0:
    // 0x1290c0: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1290C0u;
    {
        const bool branch_taken_0x1290c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1290C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290C0u;
            // 0x1290c4: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290c0) {
            ctx->pc = 0x1290F4u;
            goto label_1290f4;
        }
    }
    ctx->pc = 0x1290C8u;
    // 0x1290c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1290C8u;
    {
        const bool branch_taken_0x1290c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290C8u;
            // 0x1290cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290c8) {
            ctx->pc = 0x1290E0u;
            goto label_1290e0;
        }
    }
    ctx->pc = 0x1290D0u;
    // 0x1290d0: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1290D0u;
    {
        const bool branch_taken_0x1290d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1290d0) {
            ctx->pc = 0x1290D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1290D0u;
            // 0x1290d4: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290F8u;
            goto label_1290f8;
        }
    }
    ctx->pc = 0x1290D8u;
    // 0x1290d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1290D8u;
    {
        const bool branch_taken_0x1290d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290D8u;
            // 0x1290dc: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290d8) {
            ctx->pc = 0x1290FCu;
            goto label_1290fc;
        }
    }
    ctx->pc = 0x1290E0u;
label_1290e0:
    // 0x1290e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1290e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1290e4: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1290E4u;
    {
        const bool branch_taken_0x1290e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1290e4) {
            ctx->pc = 0x1290E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1290E4u;
            // 0x1290e8: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290F8u;
            goto label_1290f8;
        }
    }
    ctx->pc = 0x1290ECu;
    // 0x1290ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1290ECu;
    {
        const bool branch_taken_0x1290ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290ECu;
            // 0x1290f0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290ec) {
            ctx->pc = 0x1290FCu;
            goto label_1290fc;
        }
    }
    ctx->pc = 0x1290F4u;
label_1290f4:
    // 0x1290f4: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x1290f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_1290f8:
    // 0x1290f8: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x1290f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_1290fc:
    // 0x1290fc: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1290fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129100: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x129100u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
    // 0x129104: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x129108: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x129108u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x12910c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x12910cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x129110: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x129110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x129114: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x129114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x129118: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x129118u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x12911c: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x12911cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x129120: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x129120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
    // 0x129124: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x129124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x129128: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x129128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x12912c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x12912cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x129130: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x129130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x129134: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x129134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x129138: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x129138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x12913c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x12913cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x129140: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x129140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x129144: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x129144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x129148: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x12914c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x12914cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x129150: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x129150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x129154: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x129154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x129158: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x129158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x12915c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x12915cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x129160: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x129160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x129164: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x129164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x129168: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x12916c: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x12916cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x129170: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x129174: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x129174u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x129178: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x129178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x12917c: 0x3e00008  jr          $ra
    ctx->pc = 0x12917Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12917Cu;
            // 0x129180: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128F34u: goto label_128f34;
            case 0x128F50u: goto label_128f50;
            case 0x128F78u: goto label_128f78;
            case 0x128FACu: goto label_128fac;
            case 0x128FD4u: goto label_128fd4;
            case 0x128FE0u: goto label_128fe0;
            case 0x128FF4u: goto label_128ff4;
            case 0x129008u: goto label_129008;
            case 0x129044u: goto label_129044;
            case 0x129070u: goto label_129070;
            case 0x12909Cu: goto label_12909c;
            case 0x1290ACu: goto label_1290ac;
            case 0x1290B8u: goto label_1290b8;
            case 0x1290BCu: goto label_1290bc;
            case 0x1290C0u: goto label_1290c0;
            case 0x1290E0u: goto label_1290e0;
            case 0x1290F4u: goto label_1290f4;
            case 0x1290F8u: goto label_1290f8;
            case 0x1290FCu: goto label_1290fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129184u;
}
