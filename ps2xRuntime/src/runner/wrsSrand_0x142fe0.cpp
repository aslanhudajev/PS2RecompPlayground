#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSrand
// Address: 0x142fe0 - 0x1430dc
void wrsSrand_0x142fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSrand_0x142fe0");
#endif

    ctx->pc = 0x142fe0u;

    // 0x142fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142fe4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x142fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142fec: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x142fecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)21845u)));
    // 0x142ff0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142FF0u;
    {
        const bool branch_taken_0x142ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x142FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FF0u;
            // 0x142ff4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ff0) {
            ctx->pc = 0x143008u;
            goto label_143008;
        }
    }
    ctx->pc = 0x142FF8u;
    // 0x142ff8: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x142ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x142ffc: 0x3442aaaa  ori         $v0, $v0, 0xAAAA
    ctx->pc = 0x142ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43690u)));
    // 0x143000: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143000u;
    {
        const bool branch_taken_0x143000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x143000) {
            ctx->pc = 0x143010u;
            goto label_143010;
        }
    }
    ctx->pc = 0x143008u;
label_143008:
    // 0x143008: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x143008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14300c: 0x0  nop
    ctx->pc = 0x14300cu;
    // NOP
label_143010:
    // 0x143010: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143014: 0xac249be0  sw          $a0, -0x6420($at)
    ctx->pc = 0x143014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941664), GPR_U32(ctx, 4));
    // 0x143018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14301c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143020: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x143020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x143024: 0xac229bd0  sw          $v0, -0x6430($at)
    ctx->pc = 0x143024u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941648), GPR_U32(ctx, 2));
    // 0x143028: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x143028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14302c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143030: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x143030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x143034: 0xac239bd4  sw          $v1, -0x642C($at)
    ctx->pc = 0x143034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941652), GPR_U32(ctx, 3));
    // 0x143038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14303c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143040: 0x24849b50  addiu       $a0, $a0, -0x64B0
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941520));
    // 0x143044: 0xac229bd8  sw          $v0, -0x6428($at)
    ctx->pc = 0x143044u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941656), GPR_U32(ctx, 2));
    // 0x143048: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14304c: 0x0  nop
    ctx->pc = 0x14304cu;
    // NOP
label_143050:
    // 0x143050: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x143054: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x143054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x143058: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14305c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14305cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x143060: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x143060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x143064: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x143064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x143068: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x143068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x14306c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14306cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x143070: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x143070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x143074: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x143074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x143078: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143078u;
    {
        const bool branch_taken_0x143078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143078u;
            // 0x14307c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143078) {
            ctx->pc = 0x143050u;
            goto label_143050;
        }
    }
    ctx->pc = 0x143080u;
    // 0x143080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x143080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143084: 0x0  nop
    ctx->pc = 0x143084u;
    // NOP
label_143088:
    // 0x143088: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x143088u;
    SET_GPR_U32(ctx, 31, 0x143090u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143090u; }
        if (ctx->pc != 0x143090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143090u; }
        if (ctx->pc != 0x143090u) { return; }
    }
    ctx->pc = 0x143090u;
    // 0x143090: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x143090u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x143094: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x143094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x143098: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x143098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14309c: 0x24849b50  addiu       $a0, $a0, -0x64B0
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941520));
    // 0x1430a0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1430a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1430a4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1430a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1430a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1430ac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1430ACu;
    {
        const bool branch_taken_0x1430ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1430ac) {
            ctx->pc = 0x1430C0u;
            goto label_1430c0;
        }
    }
    ctx->pc = 0x1430B4u;
    // 0x1430b4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x1430b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x1430b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1430b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1430bc: 0x0  nop
    ctx->pc = 0x1430bcu;
    // NOP
label_1430c0:
    // 0x1430c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1430c4: 0x1603fff0  bne         $s0, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1430C4u;
    {
        const bool branch_taken_0x1430c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1430c4) {
            ctx->pc = 0x143088u;
            goto label_143088;
        }
    }
    ctx->pc = 0x1430CCu;
    // 0x1430cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1430ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1430d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1430d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1430d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1430D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1430D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430D4u;
            // 0x1430d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143008u: goto label_143008;
            case 0x143010u: goto label_143010;
            case 0x143050u: goto label_143050;
            case 0x143088u: goto label_143088;
            case 0x1430C0u: goto label_1430c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1430DCu;
}
