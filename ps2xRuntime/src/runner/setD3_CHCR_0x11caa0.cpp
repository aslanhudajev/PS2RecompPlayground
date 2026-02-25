#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setD3_CHCR
// Address: 0x11caa0 - 0x11cb14
void setD3_CHCR_0x11caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setD3_CHCR_0x11caa0");
#endif

    ctx->pc = 0x11caa0u;

    // 0x11caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11caa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11caac: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x11CAACu;
    SET_GPR_U32(ctx, 31, 0x11CAB4u);
    ctx->pc = 0x11CAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAACu;
            // 0x11cab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAB4u; }
        if (ctx->pc != 0x11CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAB4u; }
        if (ctx->pc != 0x11CAB4u) { return; }
    }
    ctx->pc = 0x11CAB4u;
    // 0x11cab4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x11cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x11cab8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x11cab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x11cabc: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x11cabcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62752u)));
    // 0x11cac0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x11cac0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x11cac4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x11cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x11cac8: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x11cac8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)62864u)));
    // 0x11cacc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11cad0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x11cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x11cad4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x11cad4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x11cad8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x11cad8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45056u)));
    // 0x11cadc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x11cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x11cae0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11cae0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11cae4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x11cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x11cae8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x11cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11caec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11caecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11caf0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x11caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x11caf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CAF4u;
    {
        const bool branch_taken_0x11caf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAF4u;
            // 0x11caf8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf4) {
            ctx->pc = 0x11CB08u;
            goto label_11cb08;
        }
    }
    ctx->pc = 0x11CAFCu;
    // 0x11cafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cb00: 0x804de7a  j           func_1379E8
    ctx->pc = 0x11CB00u;
    ctx->pc = 0x11CB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB00u;
            // 0x11cb04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11CB08u;
label_11cb08:
    // 0x11cb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB0Cu;
            // 0x11cb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CB08u: goto label_11cb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CB14u;
}
