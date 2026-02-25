#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _flushBuf
// Address: 0x1281a8 - 0x128298
void _flushBuf_0x1281a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_flushBuf_0x1281a8");
#endif

    ctx->pc = 0x1281a8u;

    // 0x1281a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1281a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1281ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1281acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1281b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1281b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1281b4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1281b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x1281b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1281b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1281bc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1281bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1281c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1281c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1281c4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x1281c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)16384u)));
    // 0x1281c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1281c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1281cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1281ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1281d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1281d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1281d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1281dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1281dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1281e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1281e0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1281e4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1281E4u;
    {
        const bool branch_taken_0x1281e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1281E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281E4u;
            // 0x1281e8: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e4) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x1281ECu;
    // 0x1281ec: 0x0  nop
    ctx->pc = 0x1281ecu;
    // NOP
label_1281f0:
    // 0x1281f0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1281f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281f4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1281f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1281f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1281F8u;
    {
        const bool branch_taken_0x1281f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1281FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281F8u;
            // 0x1281fc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f8) {
            ctx->pc = 0x12820Cu;
            goto label_12820c;
        }
    }
    ctx->pc = 0x128200u;
    // 0x128200: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x128200u;
    SET_GPR_U32(ctx, 31, 0x128208u);
    ctx->pc = 0x128204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128200u;
            // 0x128204: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128208u; }
        if (ctx->pc != 0x128208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128208u; }
        if (ctx->pc != 0x128208u) { return; }
    }
    ctx->pc = 0x128208u;
    // 0x128208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x128208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12820c:
    // 0x12820c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12820cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x128210: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x128214: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x128214u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x128218: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x128218u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x12821c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x128220: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x128220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x128224: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x128224u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x128228: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x128228u;
    {
        const bool branch_taken_0x128228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128228u;
            // 0x12822c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128228) {
            ctx->pc = 0x1281F0u;
            goto label_1281f0;
        }
    }
    ctx->pc = 0x128230u;
    // 0x128230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128230u;
    {
        const bool branch_taken_0x128230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128230u;
            // 0x128234: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128230) {
            ctx->pc = 0x128240u;
            goto label_128240;
        }
    }
    ctx->pc = 0x128238u;
label_128238:
    // 0x128238: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x128238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12823c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_128240:
    // 0x128240: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x128240u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x128244: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x128244u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x128248: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x128248u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x12824c: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x12824cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x128250: 0x26420180  addiu       $v0, $s2, 0x180
    ctx->pc = 0x128250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x128254: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x128254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x128258: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x128258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12825c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128260: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x128264: 0xc049f9e  jal         func_127E78
    ctx->pc = 0x128264u;
    SET_GPR_U32(ctx, 31, 0x12826Cu);
    ctx->pc = 0x128268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128264u;
            // 0x128268: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E78u;
    if (runtime->hasFunction(0x127E78u)) {
        auto targetFn = runtime->lookupFunction(0x127E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12826Cu; }
        if (ctx->pc != 0x12826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x127e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12826Cu; }
        if (ctx->pc != 0x12826Cu) { return; }
    }
    ctx->pc = 0x12826Cu;
    // 0x12826c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12826cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x128270: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x128270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128274: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x128274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x128278: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x128278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x12827c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x12827cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x128280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12828c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12828cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128290: 0x3e00008  jr          $ra
    ctx->pc = 0x128290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128290u;
            // 0x128294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1281F0u: goto label_1281f0;
            case 0x12820Cu: goto label_12820c;
            case 0x128238u: goto label_128238;
            case 0x128240u: goto label_128240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128298u;
}
