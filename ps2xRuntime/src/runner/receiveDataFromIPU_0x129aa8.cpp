#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: receiveDataFromIPU
// Address: 0x129aa8 - 0x129b2c
void receiveDataFromIPU_0x129aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("receiveDataFromIPU_0x129aa8");
#endif

    ctx->pc = 0x129aa8u;

    // 0x129aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129aac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x129aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x129ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129ab4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x129ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129abc: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x129ABCu;
    SET_GPR_U32(ctx, 31, 0x129AC4u);
    ctx->pc = 0x129AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129ABCu;
            // 0x129ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AC4u; }
        if (ctx->pc != 0x129AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AC4u; }
        if (ctx->pc != 0x129AC4u) { return; }
    }
    ctx->pc = 0x129AC4u;
    // 0x129ac4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x129ac8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x129acc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x129accu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x129ad0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x129ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x129ad4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x129ad4u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x129ad8: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x129ad8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)45072u)));
    // 0x129adc: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x129adcu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 6)));
    // 0x129ae0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129ae4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x129ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x129ae8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x129ae8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x129aec: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x129aecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x129af0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129af4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x129af4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x129af8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x129af8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x129afc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x129b00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x129b00u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x129b04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B04u;
            // 0x129b08: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B1Cu;
            goto label_129b1c;
        }
    }
    ctx->pc = 0x129B0Cu;
    // 0x129b0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129b14: 0x804de7a  j           func_1379E8
    ctx->pc = 0x129B14u;
    ctx->pc = 0x129B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B14u;
            // 0x129b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x129B1Cu;
label_129b1c:
    // 0x129b1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x129b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129b24: 0x3e00008  jr          $ra
    ctx->pc = 0x129B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B24u;
            // 0x129b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129B1Cu: goto label_129b1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129B2Cu;
}
