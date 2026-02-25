#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00109140
// Address: 0x109140 - 0x1091c0
void sub_00109140_0x109140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00109140_0x109140");
#endif

    ctx->pc = 0x109140u;

    // 0x109140: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x109140u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7u)));
    // 0x109144: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x109144u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x109148: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x109148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x10914c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10914Cu;
    {
        const bool branch_taken_0x10914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10914Cu;
            // 0x109150: 0x30c5ffff  andi        $a1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10914c) {
            ctx->pc = 0x1091B4u;
            goto label_1091b4;
        }
    }
    ctx->pc = 0x109154u;
    // 0x109154: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x109154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x109158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10915c: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x10915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
    // 0x109160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109164: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109168: 0x800008  jr          $a0
    ctx->pc = 0x109168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109170u;
label_109170:
    // 0x109170: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x109170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109174: 0x3e00008  jr          $ra
    ctx->pc = 0x109174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109174u;
            // 0x109178: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10917Cu;
label_10917c:
    // 0x10917c: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x10917cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109180: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x109184: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x109184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x109188: 0x3e00008  jr          $ra
    ctx->pc = 0x109188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109188u;
            // 0x10918c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109190u;
label_109190:
    // 0x109190: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x109190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109194: 0x3e00008  jr          $ra
    ctx->pc = 0x109194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109194u;
            // 0x109198: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10919Cu;
label_10919c:
    // 0x10919c: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x10919cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1091a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1091A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091A0u;
            // 0x1091a4: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1091A8u;
label_1091a8:
    // 0x1091a8: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x1091a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1091ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1091ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091ACu;
            // 0x1091b0: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1091B4u;
label_1091b4:
    // 0x1091b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1091B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091B4u;
            // 0x1091b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109170u: goto label_109170;
            case 0x10917Cu: goto label_10917c;
            case 0x109190u: goto label_109190;
            case 0x10919Cu: goto label_10919c;
            case 0x1091A8u: goto label_1091a8;
            case 0x1091B4u: goto label_1091b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1091BCu;
    // 0x1091bc: 0x0  nop
    ctx->pc = 0x1091bcu;
    // NOP
}
