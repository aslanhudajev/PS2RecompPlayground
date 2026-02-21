#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_max_att
// Address: 0x22c0d0 - 0x22c1a0
void player_max_att_0x22c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c0d0u;

    // 0x22c0d0: 0x27bdffc0
    ctx->pc = 0x22c0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c0d4: 0xffbf0020
    ctx->pc = 0x22c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c0d8: 0xffb10010
    ctx->pc = 0x22c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c0dc: 0xffb00000
    ctx->pc = 0x22c0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c0e0: 0xe7b40030
    ctx->pc = 0x22c0e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22c0e4: 0x80802d
    ctx->pc = 0x22c0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0e8: 0x4480a000
    ctx->pc = 0x22c0e8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x22c0ec: 0x24020010
    ctx->pc = 0x22c0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x22c0f0: 0x14a20003
    ctx->pc = 0x22C0F0u;
    {
        const bool branch_taken_0x22c0f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x22C0F4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22c0f0) {
            ctx->pc = 0x22C100u;
            goto label_22c100;
        }
    }
    ctx->pc = 0x22C0F8u;
    // 0x22c0f8: 0x10000023
    ctx->pc = 0x22C0F8u;
    {
        const bool branch_taken_0x22c0f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C0FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22c0f8) {
            ctx->pc = 0x22C188u;
            goto label_22c188;
        }
    }
    ctx->pc = 0x22C100u;
label_22c100:
    // 0x22c100: 0x200202d
    ctx->pc = 0x22c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c104: 0xc08af08
    ctx->pc = 0x22C104u;
    SET_GPR_U32(ctx, 31, 0x22C10Cu);
    ctx->pc = 0x22C108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C10Cu; }
    }
    if (ctx->pc != 0x22C10Cu) { return; }
    ctx->pc = 0x22C10Cu;
    // 0x22c10c: 0xc6000108
    ctx->pc = 0x22c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c110: 0x4600a034
    ctx->pc = 0x22c110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c114: 0x0
    ctx->pc = 0x22c114u;
    // NOP
    // 0x22c118: 0x45020004
    ctx->pc = 0x22C118u;
    {
        const bool branch_taken_0x22c118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c118) {
            ctx->pc = 0x22C11Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C120u;
    // 0x22c120: 0x882d
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c124: 0x46000506
    ctx->pc = 0x22c124u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22c128: 0xc600010c
    ctx->pc = 0x22c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c12c:
    // 0x22c12c: 0x4600a034
    ctx->pc = 0x22c12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c130: 0x0
    ctx->pc = 0x22c130u;
    // NOP
    // 0x22c134: 0x45020004
    ctx->pc = 0x22C134u;
    {
        const bool branch_taken_0x22c134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c134) {
            ctx->pc = 0x22C138u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x22C148u;
            goto label_22c148;
        }
    }
    ctx->pc = 0x22C13Cu;
    // 0x22c13c: 0x24110001
    ctx->pc = 0x22c13cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c140: 0x46000506
    ctx->pc = 0x22c140u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22c144: 0xc6000110
    ctx->pc = 0x22c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c148:
    // 0x22c148: 0x4600a034
    ctx->pc = 0x22c148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c14c: 0x0
    ctx->pc = 0x22c14cu;
    // NOP
    // 0x22c150: 0x45020004
    ctx->pc = 0x22C150u;
    {
        const bool branch_taken_0x22c150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c150) {
            ctx->pc = 0x22C154u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x22C164u;
            goto label_22c164;
        }
    }
    ctx->pc = 0x22C158u;
    // 0x22c158: 0x24110002
    ctx->pc = 0x22c158u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c15c: 0x46000506
    ctx->pc = 0x22c15cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22c160: 0xc6000114
    ctx->pc = 0x22c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c164:
    // 0x22c164: 0x4600a034
    ctx->pc = 0x22c164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c168: 0x0
    ctx->pc = 0x22c168u;
    // NOP
    // 0x22c16c: 0x45030001
    ctx->pc = 0x22C16Cu;
    {
        const bool branch_taken_0x22c16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c16c) {
            ctx->pc = 0x22C170u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x22C174u;
            goto label_22c174;
        }
    }
    ctx->pc = 0x22C174u;
label_22c174:
    // 0x22c174: 0x200202d
    ctx->pc = 0x22c174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c178: 0x8e05000c
    ctx->pc = 0x22c178u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22c17c: 0xc08af08
    ctx->pc = 0x22C17Cu;
    SET_GPR_U32(ctx, 31, 0x22C184u);
    ctx->pc = 0x22C180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C184u; }
    }
    if (ctx->pc != 0x22C184u) { return; }
    ctx->pc = 0x22C184u;
    // 0x22c184: 0x220102d
    ctx->pc = 0x22c184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c188:
    // 0x22c188: 0xdfbf0020
    ctx->pc = 0x22c188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c18c: 0xdfb10010
    ctx->pc = 0x22c18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c190: 0xdfb00000
    ctx->pc = 0x22c190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c194: 0xc7b40030
    ctx->pc = 0x22c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c198: 0x3e00008
    ctx->pc = 0x22C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C19Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C100u: goto label_22c100;
            case 0x22C12Cu: goto label_22c12c;
            case 0x22C148u: goto label_22c148;
            case 0x22C164u: goto label_22c164;
            case 0x22C174u: goto label_22c174;
            case 0x22C188u: goto label_22c188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C1A0u;
}
