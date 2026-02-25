#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _waitIpuIdle64
// Address: 0x127e78 - 0x127f28
void _waitIpuIdle64_0x127e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitIpuIdle64_0x127e78");
#endif

    ctx->pc = 0x127e78u;

    // 0x127e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x127e7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127e80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127e84: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x127e84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x127e88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127e8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127e9c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x127e9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127ea0: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x127EA0u;
    {
        const bool branch_taken_0x127ea0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x127EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127EA0u;
            // 0x127ea4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ea0) {
            ctx->pc = 0x127F10u;
            goto label_127f10;
        }
    }
    ctx->pc = 0x127EA8u;
    // 0x127ea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127eac: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x127eacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x127eb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x127eb4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x127eb4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x127eb8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x127EB8u;
    {
        const bool branch_taken_0x127eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127EB8u;
            // 0x127ebc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127eb8) {
            ctx->pc = 0x127F14u;
            goto label_127f14;
        }
    }
    ctx->pc = 0x127EC0u;
    // 0x127ec0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x127ec4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x127ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x127ec8: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x127ec8u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)8192u)));
    // 0x127ecc: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x127eccu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8208u)));
    // 0x127ed0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x127ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ed4: 0x0  nop
    ctx->pc = 0x127ed4u;
    // NOP
label_127ed8:
    // 0x127ed8: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x127ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x127edc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127EDCu;
    {
        const bool branch_taken_0x127edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127EDCu;
            // 0x127ee0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127edc) {
            ctx->pc = 0x127EF0u;
            goto label_127ef0;
        }
    }
    ctx->pc = 0x127EE4u;
    // 0x127ee4: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x127EE4u;
    SET_GPR_U32(ctx, 31, 0x127EECu);
    ctx->pc = 0x127EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127EE4u;
            // 0x127ee8: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127EECu; }
        if (ctx->pc != 0x127EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127EECu; }
        if (ctx->pc != 0x127EECu) { return; }
    }
    ctx->pc = 0x127EECu;
    // 0x127eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127ef0:
    // 0x127ef0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x127ef0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x127ef4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127EF4u;
    {
        const bool branch_taken_0x127ef4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127EF4u;
            // 0x127ef8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ef4) {
            ctx->pc = 0x127F10u;
            goto label_127f10;
        }
    }
    ctx->pc = 0x127EFCu;
    // 0x127efc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x127f00: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x127f00u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x127f04: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x127F04u;
    {
        const bool branch_taken_0x127f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F04u;
            // 0x127f08: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f04) {
            ctx->pc = 0x127ED8u;
            goto label_127ed8;
        }
    }
    ctx->pc = 0x127F0Cu;
    // 0x127f0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_127f10:
    // 0x127f10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x127f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127f14:
    // 0x127f14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127f18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f20: 0x3e00008  jr          $ra
    ctx->pc = 0x127F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F20u;
            // 0x127f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127ED8u: goto label_127ed8;
            case 0x127EF0u: goto label_127ef0;
            case 0x127F10u: goto label_127f10;
            case 0x127F14u: goto label_127f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127F28u;
}
