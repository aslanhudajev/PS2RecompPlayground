#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PointsRenderFunction
// Address: 0x1db3c0 - 0x1db760
void PointsRenderFunction_0x1db3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PointsRenderFunction_0x1db3c0");
#endif

    ctx->pc = 0x1db3c0u;

    // 0x1db3c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1db3c4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db3c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1db3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1db3cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db3d8: 0xac201d78  sw          $zero, 0x1D78($at)
    ctx->pc = 0x1db3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7544), GPR_U32(ctx, 0));
    // 0x1db3dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db3e0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1DB3E0u;
    {
        const bool branch_taken_0x1db3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3E0u;
            // 0x1db3e4: 0x8c311d80  lw          $s1, 0x1D80($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3e0) {
            ctx->pc = 0x1DB6A8u;
            goto label_1db6a8;
        }
    }
    ctx->pc = 0x1DB3E8u;
label_1db3e8:
    // 0x1db3e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db3ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1db3ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1db3f0: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x1DB3F0u;
    {
        const bool branch_taken_0x1db3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3F0u;
            // 0x1db3f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3f0) {
            ctx->pc = 0x1DB6A0u;
            goto label_1db6a0;
        }
    }
    ctx->pc = 0x1DB3F8u;
    // 0x1db3f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1db3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3fc: 0x0  nop
    ctx->pc = 0x1db3fcu;
    // NOP
label_1db400:
    // 0x1db400: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db404: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1db404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db408: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1db408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1db40c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1db40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db410: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db414: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db418: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1db418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1db41c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1db420: 0x2463ad90  addiu       $v1, $v1, -0x5270
    ctx->pc = 0x1db420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946192));
    // 0x1db424: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1db424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db428: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1db428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1db42c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1db42cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1db430: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x1db430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db434: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1db434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1db438: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1db438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1db43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db440: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1db440u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db444: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1db448: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x1db448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x1db44c: 0x3442a540  ori         $v0, $v0, 0xA540
    ctx->pc = 0x1db44cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42304u)));
    // 0x1db450: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1db450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1db454: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1db454u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db458: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1db458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1db45c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db460: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1db460u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1db464: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1db464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1db468: 0xc076df4  jal         func_1DB7D0
    ctx->pc = 0x1DB468u;
    SET_GPR_U32(ctx, 31, 0x1DB470u);
    ctx->pc = 0x1DB46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB468u;
            // 0x1db46c: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB7D0u;
    if (runtime->hasFunction(0x1DB7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB470u; }
        if (ctx->pc != 0x1DB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1db7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB470u; }
        if (ctx->pc != 0x1DB470u) { return; }
    }
    ctx->pc = 0x1DB470u;
    // 0x1db470: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1db474: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db478: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1db478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db47c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1db480: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1db480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db484: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1db484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db488: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1db488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1db48c: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db494: 0x2463ad90  addiu       $v1, $v1, -0x5270
    ctx->pc = 0x1db494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946192));
    // 0x1db498: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1db498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db49c: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x1db4a0: 0x3442a540  ori         $v0, $v0, 0xA540
    ctx->pc = 0x1db4a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42304u)));
    // 0x1db4a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1db4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1db4a8: 0x460310c0  add.s       $f3, $f2, $f3
    ctx->pc = 0x1db4a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1db4ac: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x1db4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1db4b0: 0x2422818  mult        $a1, $s2, $v0
    ctx->pc = 0x1db4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1db4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db4b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1db4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1db4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db4c0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1db4c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db4c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1db4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db4c8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1db4c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db4cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db4d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1db4d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1db4d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db4d8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1db4d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1db4dc: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x1db4dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1db4e0: 0xc076df4  jal         func_1DB7D0
    ctx->pc = 0x1DB4E0u;
    SET_GPR_U32(ctx, 31, 0x1DB4E8u);
    ctx->pc = 0x1DB4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4E0u;
            // 0x1db4e4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB7D0u;
    if (runtime->hasFunction(0x1DB7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4E8u; }
        if (ctx->pc != 0x1DB4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1db7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4E8u; }
        if (ctx->pc != 0x1DB4E8u) { return; }
    }
    ctx->pc = 0x1DB4E8u;
    // 0x1db4e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db4ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db4f0: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db4f4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1db4f8: 0x24632d90  addiu       $v1, $v1, 0x2D90
    ctx->pc = 0x1db4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
    // 0x1db4fc: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1db500: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1db500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db504: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1db504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1db508: 0xc076de8  jal         func_1DB7A0
    ctx->pc = 0x1DB508u;
    SET_GPR_U32(ctx, 31, 0x1DB510u);
    ctx->pc = 0x1DB50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB508u;
            // 0x1db50c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB7A0u;
    if (runtime->hasFunction(0x1DB7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB510u; }
        if (ctx->pc != 0x1DB510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1db7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB510u; }
        if (ctx->pc != 0x1DB510u) { return; }
    }
    ctx->pc = 0x1DB510u;
    // 0x1db510: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db514: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1db514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db518: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db51c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1db51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1db520: 0x24632d90  addiu       $v1, $v1, 0x2D90
    ctx->pc = 0x1db520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
    // 0x1db524: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1db528: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db52c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1db530: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1db530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1db538: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1db53c: 0xc076de8  jal         func_1DB7A0
    ctx->pc = 0x1DB53Cu;
    SET_GPR_U32(ctx, 31, 0x1DB544u);
    ctx->pc = 0x1DB540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB53Cu;
            // 0x1db540: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB7A0u;
    if (runtime->hasFunction(0x1DB7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB544u; }
        if (ctx->pc != 0x1DB544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1db7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB544u; }
        if (ctx->pc != 0x1DB544u) { return; }
    }
    ctx->pc = 0x1DB544u;
    // 0x1db544: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1db544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1db548: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DB548u;
    {
        const bool branch_taken_0x1db548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db548) {
            ctx->pc = 0x1DB5E8u;
            goto label_1db5e8;
        }
    }
    ctx->pc = 0x1DB550u;
    // 0x1db550: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db554: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x1db554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1db558: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB558u;
    {
        const bool branch_taken_0x1db558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB558u;
            // 0x1db55c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db558) {
            ctx->pc = 0x1DB5A8u;
            goto label_1db5a8;
        }
    }
    ctx->pc = 0x1DB560u;
    // 0x1db560: 0x24a3ffd8  addiu       $v1, $a1, -0x28
    ctx->pc = 0x1db560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x1db564: 0x8c291d78  lw          $t1, 0x1D78($at)
    ctx->pc = 0x1db564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db568: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1db56c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1db570: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1db570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1db574: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db578: 0x24841d90  addiu       $a0, $a0, 0x1D90
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7568));
    // 0x1db57c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1db580: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1db580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db584: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db588: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1db588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db58c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1db58cu;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1db590: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1db590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1db594: 0xc076de0  jal         func_1DB780
    ctx->pc = 0x1DB594u;
    SET_GPR_U32(ctx, 31, 0x1DB59Cu);
    ctx->pc = 0x1DB598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB594u;
            // 0x1db598: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB59Cu; }
        if (ctx->pc != 0x1DB59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB59Cu; }
        if (ctx->pc != 0x1DB59Cu) { return; }
    }
    ctx->pc = 0x1DB59Cu;
    // 0x1db59c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DB59Cu;
    {
        const bool branch_taken_0x1db59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db59c) {
            ctx->pc = 0x1DB678u;
            goto label_1db678;
        }
    }
    ctx->pc = 0x1DB5A4u;
    // 0x1db5a4: 0x0  nop
    ctx->pc = 0x1db5a4u;
    // NOP
label_1db5a8:
    // 0x1db5a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db5ac: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db5b0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1db5b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db5b8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1db5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1db5bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1db5c0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1db5c0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1db5c4: 0x24631d90  addiu       $v1, $v1, 0x1D90
    ctx->pc = 0x1db5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7568));
    // 0x1db5c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1db5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1db5ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db5d4: 0xc076de0  jal         func_1DB780
    ctx->pc = 0x1DB5D4u;
    SET_GPR_U32(ctx, 31, 0x1DB5DCu);
    ctx->pc = 0x1DB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5D4u;
            // 0x1db5d8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5DCu; }
        if (ctx->pc != 0x1DB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5DCu; }
        if (ctx->pc != 0x1DB5DCu) { return; }
    }
    ctx->pc = 0x1DB5DCu;
    // 0x1db5dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DB5DCu;
    {
        const bool branch_taken_0x1db5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5dc) {
            ctx->pc = 0x1DB678u;
            goto label_1db678;
        }
    }
    ctx->pc = 0x1DB5E4u;
    // 0x1db5e4: 0x0  nop
    ctx->pc = 0x1db5e4u;
    // NOP
label_1db5e8:
    // 0x1db5e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db5ec: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x1db5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1db5f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB5F0u;
    {
        const bool branch_taken_0x1db5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5F0u;
            // 0x1db5f4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5f0) {
            ctx->pc = 0x1DB640u;
            goto label_1db640;
        }
    }
    ctx->pc = 0x1DB5F8u;
    // 0x1db5f8: 0x24a3ffd8  addiu       $v1, $a1, -0x28
    ctx->pc = 0x1db5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x1db5fc: 0x8c291d78  lw          $t1, 0x1D78($at)
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db600: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1db600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1db604: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db608: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1db60c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1db610: 0x24841d90  addiu       $a0, $a0, 0x1D90
    ctx->pc = 0x1db610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7568));
    // 0x1db614: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1db614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db618: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1db61c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1db61cu;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1db620: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1db620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1db624: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1db628: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1db628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1db62c: 0xc076de0  jal         func_1DB780
    ctx->pc = 0x1DB62Cu;
    SET_GPR_U32(ctx, 31, 0x1DB634u);
    ctx->pc = 0x1DB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB62Cu;
            // 0x1db630: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB634u; }
        if (ctx->pc != 0x1DB634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB634u; }
        if (ctx->pc != 0x1DB634u) { return; }
    }
    ctx->pc = 0x1DB634u;
    // 0x1db634: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB634u;
    {
        const bool branch_taken_0x1db634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db634) {
            ctx->pc = 0x1DB678u;
            goto label_1db678;
        }
    }
    ctx->pc = 0x1DB63Cu;
    // 0x1db63c: 0x0  nop
    ctx->pc = 0x1db63cu;
    // NOP
label_1db640:
    // 0x1db640: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db644: 0x8c241d78  lw          $a0, 0x1D78($at)
    ctx->pc = 0x1db644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db648: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1db648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1db64c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db650: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1db650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1db654: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1db654u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1db658: 0x24631d90  addiu       $v1, $v1, 0x1D90
    ctx->pc = 0x1db658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7568));
    // 0x1db65c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1db65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1db660: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1db660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1db664: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1db668: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1db668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db66c: 0xc076de0  jal         func_1DB780
    ctx->pc = 0x1DB66Cu;
    SET_GPR_U32(ctx, 31, 0x1DB674u);
    ctx->pc = 0x1DB670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB66Cu;
            // 0x1db670: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB674u; }
        if (ctx->pc != 0x1DB674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB674u; }
        if (ctx->pc != 0x1DB674u) { return; }
    }
    ctx->pc = 0x1DB674u;
    // 0x1db674: 0x0  nop
    ctx->pc = 0x1db674u;
    // NOP
label_1db678:
    // 0x1db678: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db67c: 0x8c221d78  lw          $v0, 0x1D78($at)
    ctx->pc = 0x1db67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1db684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db688: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db68c: 0xac221d78  sw          $v0, 0x1D78($at)
    ctx->pc = 0x1db68cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7544), GPR_U32(ctx, 2));
    // 0x1db690: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db694: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1db694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1db698: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1DB698u;
    {
        const bool branch_taken_0x1db698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB698u;
            // 0x1db69c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db698) {
            ctx->pc = 0x1DB400u;
            goto label_1db400;
        }
    }
    ctx->pc = 0x1DB6A0u;
label_1db6a0:
    // 0x1db6a0: 0x8e310040  lw          $s1, 0x40($s1)
    ctx->pc = 0x1db6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1db6a4: 0x0  nop
    ctx->pc = 0x1db6a4u;
    // NOP
label_1db6a8:
    // 0x1db6a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB6A8u;
    {
        const bool branch_taken_0x1db6a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6A8u;
            // 0x1db6ac: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6a8) {
            ctx->pc = 0x1DB6C0u;
            goto label_1db6c0;
        }
    }
    ctx->pc = 0x1DB6B0u;
    // 0x1db6b0: 0x8c221d78  lw          $v0, 0x1D78($at)
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db6b4: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x1db6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1db6b8: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x1DB6B8u;
    {
        const bool branch_taken_0x1db6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db6b8) {
            ctx->pc = 0x1DB3E8u;
            goto label_1db3e8;
        }
    }
    ctx->pc = 0x1DB6C0u;
label_1db6c0:
    // 0x1db6c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db6c4: 0x8c271d78  lw          $a3, 0x1D78($at)
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db6c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1db6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1db6cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1db6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db6d0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1db6d4: 0xc059e60  jal         func_167980
    ctx->pc = 0x1DB6D4u;
    SET_GPR_U32(ctx, 31, 0x1DB6DCu);
    ctx->pc = 0x1DB6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6D4u;
            // 0x1db6d8: 0x24c62d70  addiu       $a2, $a2, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6DCu; }
        if (ctx->pc != 0x1DB6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6DCu; }
        if (ctx->pc != 0x1DB6DCu) { return; }
    }
    ctx->pc = 0x1DB6DCu;
    // 0x1db6dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db6e0: 0x8c231d78  lw          $v1, 0x1D78($at)
    ctx->pc = 0x1db6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db6e4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DB6E4u;
    {
        const bool branch_taken_0x1db6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6e4) {
            ctx->pc = 0x1DB748u;
            goto label_1db748;
        }
    }
    ctx->pc = 0x1DB6ECu;
    // 0x1db6ec: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1db6f0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1db6f4: 0x2442ad90  addiu       $v0, $v0, -0x5270
    ctx->pc = 0x1db6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946192));
    // 0x1db6f8: 0x24631d90  addiu       $v1, $v1, 0x1D90
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7568));
    // 0x1db6fc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1db6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1db700: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1db704: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1db708: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1db708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x1db70c: 0x24422d90  addiu       $v0, $v0, 0x2D90
    ctx->pc = 0x1db70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
    // 0x1db710: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1DB710u;
    SET_GPR_U32(ctx, 31, 0x1DB718u);
    ctx->pc = 0x1DB714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB710u;
            // 0x1db714: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB718u; }
        if (ctx->pc != 0x1DB718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB718u; }
        if (ctx->pc != 0x1DB718u) { return; }
    }
    ctx->pc = 0x1DB718u;
    // 0x1db718: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1db718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1db71c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db724: 0xc076ddc  jal         func_1DB770
    ctx->pc = 0x1DB724u;
    SET_GPR_U32(ctx, 31, 0x1DB72Cu);
    ctx->pc = 0x1DB728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB724u;
            // 0x1db728: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB770u;
    if (runtime->hasFunction(0x1DB770u)) {
        auto targetFn = runtime->lookupFunction(0x1DB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB72Cu; }
        if (ctx->pc != 0x1DB72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1db770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB72Cu; }
        if (ctx->pc != 0x1DB72Cu) { return; }
    }
    ctx->pc = 0x1DB72Cu;
    // 0x1db72c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db730: 0x8c251d78  lw          $a1, 0x1D78($at)
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7544)));
    // 0x1db734: 0xc076dd8  jal         func_1DB760
    ctx->pc = 0x1DB734u;
    SET_GPR_U32(ctx, 31, 0x1DB73Cu);
    ctx->pc = 0x1DB738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB734u;
            // 0x1db738: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB760u;
    if (runtime->hasFunction(0x1DB760u)) {
        auto targetFn = runtime->lookupFunction(0x1DB760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB73Cu; }
        if (ctx->pc != 0x1DB73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1db760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB73Cu; }
        if (ctx->pc != 0x1DB73Cu) { return; }
    }
    ctx->pc = 0x1DB73Cu;
    // 0x1db73c: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1DB73Cu;
    SET_GPR_U32(ctx, 31, 0x1DB744u);
    ctx->pc = 0x1DB740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB73Cu;
            // 0x1db740: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB744u; }
        if (ctx->pc != 0x1DB744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB744u; }
        if (ctx->pc != 0x1DB744u) { return; }
    }
    ctx->pc = 0x1DB744u;
    // 0x1db744: 0x0  nop
    ctx->pc = 0x1db744u;
    // NOP
label_1db748:
    // 0x1db748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1db748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db74c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db758: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB758u;
            // 0x1db75c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB3E8u: goto label_1db3e8;
            case 0x1DB400u: goto label_1db400;
            case 0x1DB5A8u: goto label_1db5a8;
            case 0x1DB5E8u: goto label_1db5e8;
            case 0x1DB640u: goto label_1db640;
            case 0x1DB678u: goto label_1db678;
            case 0x1DB6A0u: goto label_1db6a0;
            case 0x1DB6A8u: goto label_1db6a8;
            case 0x1DB6C0u: goto label_1db6c0;
            case 0x1DB748u: goto label_1db748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB760u;
}
