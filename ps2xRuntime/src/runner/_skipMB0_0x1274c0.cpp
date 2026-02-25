#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _skipMB0
// Address: 0x1274c0 - 0x12757c
void _skipMB0_0x1274c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_skipMB0_0x1274c0");
#endif

    ctx->pc = 0x1274c0u;

    // 0x1274c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1274c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1274c4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1274c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1274c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1274c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1274cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1274ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1274d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1274d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1274d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274d8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1274d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1274dc: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x1274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x1274e0: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x1274e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1274e4: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x1274e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1274e8: 0xac4906cc  sw          $t1, 0x6CC($v0)
    ctx->pc = 0x1274e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 9));
    // 0x1274ec: 0xac8901b0  sw          $t1, 0x1B0($a0)
    ctx->pc = 0x1274ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 9));
    // 0x1274f0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1274f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1274f4: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1274F4u;
    {
        const bool branch_taken_0x1274f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1274f4) {
            ctx->pc = 0x1274F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1274F4u;
            // 0x1274f8: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127510u;
            goto label_127510;
        }
    }
    ctx->pc = 0x1274FCu;
    // 0x1274fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1274fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x127500: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x127500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x127504: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x127504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x127508: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x127508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12750c: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x12750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_127510:
    // 0x127510: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127514: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127514u;
    {
        const bool branch_taken_0x127514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127514) {
            ctx->pc = 0x127518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127514u;
            // 0x127518: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127524u;
            goto label_127524;
        }
    }
    ctx->pc = 0x12751Cu;
    // 0x12751c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12751Cu;
    {
        const bool branch_taken_0x12751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12751Cu;
            // 0x127520: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12751c) {
            ctx->pc = 0x127538u;
            goto label_127538;
        }
    }
    ctx->pc = 0x127524u;
label_127524:
    // 0x127524: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x127524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x127528: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x127528u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
    // 0x12752c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x127530: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x127530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x127534: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x127534u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_127538:
    // 0x127538: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x127538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x12753c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127540: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127540u;
    {
        const bool branch_taken_0x127540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127540) {
            ctx->pc = 0x127544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127540u;
            // 0x127544: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12755Cu;
            goto label_12755c;
        }
    }
    ctx->pc = 0x127548u;
    // 0x127548: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x127548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12754c: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12754Cu;
    SET_GPR_U32(ctx, 31, 0x127554u);
    ctx->pc = 0x127550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12754Cu;
            // 0x127550: 0x24a5f288  addiu       $a1, $a1, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127554u; }
        if (ctx->pc != 0x127554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127554u; }
        if (ctx->pc != 0x127554u) { return; }
    }
    ctx->pc = 0x127554u;
    // 0x127554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x127554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x127558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12755c:
    // 0x12755c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x12755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x127560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127564: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x127564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127568: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x127568u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12756c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x127570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127574: 0x3e00008  jr          $ra
    ctx->pc = 0x127574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127574u;
            // 0x127578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127510u: goto label_127510;
            case 0x127524u: goto label_127524;
            case 0x127538u: goto label_127538;
            case 0x12755Cu: goto label_12755c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12757Cu;
}
