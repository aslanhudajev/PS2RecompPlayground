#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _get_unpack_size
// Address: 0x110300 - 0x1103b0
void _get_unpack_size_0x110300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_get_unpack_size_0x110300");
#endif

    ctx->pc = 0x110300u;

    // 0x110300: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x110300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x110304: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x110304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110308: 0x8d02f888  lw          $v0, -0x778($t0)
    ctx->pc = 0x110308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965384)));
    // 0x11030c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11030cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110314: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x110314u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x110318: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x110318u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)12u)));
    // 0x11031c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x11031cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x110320: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x110320u;
    {
        const bool branch_taken_0x110320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x110324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110320u;
            // 0x110324: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110320) {
            ctx->pc = 0x110358u;
            goto label_110358;
        }
    }
    ctx->pc = 0x110328u;
    // 0x110328: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x110328u;
    {
        const bool branch_taken_0x110328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110328u;
            // 0x11032c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110328) {
            ctx->pc = 0x110348u;
            goto label_110348;
        }
    }
    ctx->pc = 0x110330u;
    // 0x110330: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110330u;
    {
        const bool branch_taken_0x110330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x110334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110330u;
            // 0x110334: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110330) {
            ctx->pc = 0x110350u;
            goto label_110350;
        }
    }
    ctx->pc = 0x110338u;
    // 0x110338: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110338u;
    {
        const bool branch_taken_0x110338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110338u;
            // 0x11033c: 0x2502f888  addiu       $v0, $t0, -0x778 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110338) {
            ctx->pc = 0x110358u;
            goto label_110358;
        }
    }
    ctx->pc = 0x110340u;
    // 0x110340: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110340u;
    {
        const bool branch_taken_0x110340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110340u;
            // 0x110344: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110340) {
            ctx->pc = 0x110364u;
            goto label_110364;
        }
    }
    ctx->pc = 0x110348u;
label_110348:
    // 0x110348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110348u;
    {
        const bool branch_taken_0x110348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110348u;
            // 0x11034c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110348) {
            ctx->pc = 0x11035Cu;
            goto label_11035c;
        }
    }
    ctx->pc = 0x110350u;
label_110350:
    // 0x110350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110350u;
    {
        const bool branch_taken_0x110350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110350u;
            // 0x110354: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110350) {
            ctx->pc = 0x11035Cu;
            goto label_11035c;
        }
    }
    ctx->pc = 0x110358u;
label_110358:
    // 0x110358: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11035c:
    // 0x11035c: 0x2502f888  addiu       $v0, $t0, -0x778
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965384));
    // 0x110360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_110364:
    // 0x110364: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x110364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x110368: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x110368u;
    {
        const bool branch_taken_0x110368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x110368) {
            ctx->pc = 0x11036Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110368u;
            // 0x11036c: 0x711c0  sll         $v0, $a3, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110388u;
            goto label_110388;
        }
    }
    ctx->pc = 0x110370u;
    // 0x110370: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x110370u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110374: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x110374u;
    {
        const bool branch_taken_0x110374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x110374) {
            ctx->pc = 0x110378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110374u;
            // 0x110378: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11037Cu;
            goto label_11037c;
        }
    }
    ctx->pc = 0x11037Cu;
label_11037c:
    // 0x11037c: 0x1012  mflo        $v0
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x110380: 0x3e00008  jr          $ra
    ctx->pc = 0x110380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110348u: goto label_110348;
            case 0x110350u: goto label_110350;
            case 0x110358u: goto label_110358;
            case 0x11035Cu: goto label_11035c;
            case 0x110364u: goto label_110364;
            case 0x11037Cu: goto label_11037c;
            case 0x110388u: goto label_110388;
            case 0x110390u: goto label_110390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110388u;
label_110388:
    // 0x110388: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x110388u;
    {
        const bool branch_taken_0x110388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x110388) {
            ctx->pc = 0x11038Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110388u;
            // 0x11038c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x110390u;
            goto label_110390;
        }
    }
    ctx->pc = 0x110390u;
label_110390:
    // 0x110390: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x110390u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110394: 0x1012  mflo        $v0
    ctx->pc = 0x110394u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x110398: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x110398u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11039c: 0x1810  mfhi        $v1
    ctx->pc = 0x11039cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1103a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1103a4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1103a4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1103a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1103A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1103ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1103A8u;
            // 0x1103ac: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110348u: goto label_110348;
            case 0x110350u: goto label_110350;
            case 0x110358u: goto label_110358;
            case 0x11035Cu: goto label_11035c;
            case 0x110364u: goto label_110364;
            case 0x11037Cu: goto label_11037c;
            case 0x110388u: goto label_110388;
            case 0x110390u: goto label_110390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1103B0u;
}
