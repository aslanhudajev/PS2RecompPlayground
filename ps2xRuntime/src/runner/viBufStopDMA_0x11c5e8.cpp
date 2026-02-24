#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufStopDMA
// Address: 0x11c5e8 - 0x11c6e8
void viBufStopDMA_0x11c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufStopDMA_0x11c5e8");
#endif

    ctx->pc = 0x11c5e8u;

    // 0x11c5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c5ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c5f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5f8: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11C5F8u;
    SET_GPR_U32(ctx, 31, 0x11C600u);
    ctx->pc = 0x11C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5F8u;
            // 0x11c5fc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C600u; }
        if (ctx->pc != 0x11C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C600u; }
        if (ctx->pc != 0x11C600u) { return; }
    }
    ctx->pc = 0x11C600u;
    // 0x11c600: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x11c600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x11c604: 0xc04701c  jal         func_11C070
    ctx->pc = 0x11C604u;
    SET_GPR_U32(ctx, 31, 0x11C60Cu);
    ctx->pc = 0x11C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C604u;
            // 0x11c608: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C070u;
    if (runtime->hasFunction(0x11C070u)) {
        auto targetFn = runtime->lookupFunction(0x11C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C60Cu; }
        if (ctx->pc != 0x11C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C60Cu; }
        if (ctx->pc != 0x11C60Cu) { return; }
    }
    ctx->pc = 0x11C60Cu;
    // 0x11c60c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c610: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x11c610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x11c614: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x11c614u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x11c618: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x11c618u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)46128u)));
    // 0x11c61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11c620: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11c620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11c624: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x11c624u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x11c628: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x11c62c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x11c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x11c630: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x11c630u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46080u)));
    // 0x11c634: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x11c638: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x11c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c63c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x11c63cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)8208u)));
    // 0x11c640: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x11c640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x11c644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c648: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x11c648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x11c64c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c650: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x11c650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x11c654: 0x0  nop
    ctx->pc = 0x11c654u;
    // NOP
label_11c658:
    // 0x11c658: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c65c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11c65cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)240u)));
    // 0x11c660: 0x0  nop
    ctx->pc = 0x11c660u;
    // NOP
    // 0x11c664: 0x0  nop
    ctx->pc = 0x11c664u;
    // NOP
    // 0x11c668: 0x0  nop
    ctx->pc = 0x11c668u;
    // NOP
    // 0x11c66c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C66Cu;
    {
        const bool branch_taken_0x11c66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c66c) {
            ctx->pc = 0x11C658u;
            goto label_11c658;
        }
    }
    ctx->pc = 0x11C674u;
    // 0x11c674: 0xc047002  jal         func_11C008
    ctx->pc = 0x11C674u;
    SET_GPR_U32(ctx, 31, 0x11C67Cu);
    ctx->pc = 0x11C678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C674u;
            // 0x11c678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C008u;
    if (runtime->hasFunction(0x11C008u)) {
        auto targetFn = runtime->lookupFunction(0x11C008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C67Cu; }
        if (ctx->pc != 0x11C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x11c008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C67Cu; }
        if (ctx->pc != 0x11C67Cu) { return; }
    }
    ctx->pc = 0x11C67Cu;
    // 0x11c67c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c680: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x11c684: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x11c684u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45072u)));
    // 0x11c688: 0x3508b020  ori         $t0, $t0, 0xB020
    ctx->pc = 0x11c688u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)45088u)));
    // 0x11c68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11c690: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x11c694: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x11c694u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)45056u)));
    // 0x11c698: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x11c69c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x11c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x11c6a0: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x11c6a0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)8224u)));
    // 0x11c6a4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x11c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x11c6a8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c6ac: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11c6b0: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x11c6b0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8208u)));
    // 0x11c6b4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x11c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x11c6b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c6bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x11c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x11c6c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c6c4: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x11c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x11c6c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c6cc: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x11C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6CCu;
            // 0x11c6d0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6D4u; }
        if (ctx->pc != 0x11C6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6D4u; }
        if (ctx->pc != 0x11C6D4u) { return; }
    }
    ctx->pc = 0x11C6D4u;
    // 0x11c6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6E0u;
            // 0x11c6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C658u: goto label_11c658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C6E8u;
}
