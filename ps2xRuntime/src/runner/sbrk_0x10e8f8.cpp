#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sbrk
// Address: 0x10e8f8 - 0x10e9a4
void sbrk_0x10e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sbrk_0x10e8f8");
#endif

    ctx->pc = 0x10e8f8u;

    // 0x10e8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e8fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e900: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e904: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e90c: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x10e910: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10e914: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10e914u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x10e918: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E918u;
    {
        const bool branch_taken_0x10e918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E918u;
            // 0x10e91c: 0x3c120017  lui         $s2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e918) {
            ctx->pc = 0x10E944u;
            goto label_10e944;
        }
    }
    ctx->pc = 0x10E920u;
label_10e920:
    // 0x10e920: 0x42000039  di
    ctx->pc = 0x10e920u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10e924: 0x40f  sync.p
    ctx->pc = 0x10e924u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e928: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10e92c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10e930: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e930u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10e934: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E934u;
    {
        const bool branch_taken_0x10e934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e934) {
            ctx->pc = 0x10E920u;
            goto label_10e920;
        }
    }
    ctx->pc = 0x10E93Cu;
    // 0x10e93c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E93Cu;
    {
        const bool branch_taken_0x10e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E93Cu;
            // 0x10e940: 0x8e42f380  lw          $v0, -0xC80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e93c) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E944u;
label_10e944:
    // 0x10e944: 0x8e42f380  lw          $v0, -0xC80($s2)
    ctx->pc = 0x10e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964096)));
label_10e948:
    // 0x10e948: 0xc0438a0  jal         func_10E280
    ctx->pc = 0x10E948u;
    SET_GPR_U32(ctx, 31, 0x10E950u);
    ctx->pc = 0x10E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E948u;
            // 0x10e94c: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E280u;
    if (runtime->hasFunction(0x10E280u)) {
        auto targetFn = runtime->lookupFunction(0x10E280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E950u; }
        if (ctx->pc != 0x10E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndOfHeap_0x10e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E950u; }
        if (ctx->pc != 0x10E950u) { return; }
    }
    ctx->pc = 0x10E950u;
    // 0x10e950: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10e954: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10E954u;
    {
        const bool branch_taken_0x10e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E954u;
            // 0x10e958: 0x8e42f380  lw          $v0, -0xC80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e954) {
            ctx->pc = 0x10E980u;
            goto label_10e980;
        }
    }
    ctx->pc = 0x10E95Cu;
    // 0x10e95c: 0xc04a844  jal         func_12A110
    ctx->pc = 0x10E95Cu;
    SET_GPR_U32(ctx, 31, 0x10E964u);
    ctx->pc = 0x12A110u;
    if (runtime->hasFunction(0x12A110u)) {
        auto targetFn = runtime->lookupFunction(0x12A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E964u; }
        if (ctx->pc != 0x10E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x12a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E964u; }
        if (ctx->pc != 0x10E964u) { return; }
    }
    ctx->pc = 0x10E964u;
    // 0x10e964: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e968: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E968u;
    {
        const bool branch_taken_0x10e968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E968u;
            // 0x10e96c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e968) {
            ctx->pc = 0x10E974u;
            goto label_10e974;
        }
    }
    ctx->pc = 0x10E970u;
    // 0x10e970: 0x42000038  ei
    ctx->pc = 0x10e970u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10e974:
    // 0x10e974: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10e978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10E978u;
    {
        const bool branch_taken_0x10e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E978u;
            // 0x10e97c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e978) {
            ctx->pc = 0x10E98Cu;
            goto label_10e98c;
        }
    }
    ctx->pc = 0x10E980u;
label_10e980:
    // 0x10e980: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E980u;
    {
        const bool branch_taken_0x10e980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E980u;
            // 0x10e984: 0xae50f380  sw          $s0, -0xC80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294964096), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e980) {
            ctx->pc = 0x10E98Cu;
            goto label_10e98c;
        }
    }
    ctx->pc = 0x10E988u;
    // 0x10e988: 0x42000038  ei
    ctx->pc = 0x10e988u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10e98c:
    // 0x10e98c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e990: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e994: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e99c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E99Cu;
            // 0x10e9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E920u: goto label_10e920;
            case 0x10E944u: goto label_10e944;
            case 0x10E948u: goto label_10e948;
            case 0x10E974u: goto label_10e974;
            case 0x10E980u: goto label_10e980;
            case 0x10E98Cu: goto label_10e98c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E9A4u;
}
